import os
import json
import urllib.request
import re
import shutil

API_URL = "https://codeforces.com/api/problemset.problems"
BASE_DIR = "/home/gabriel/Study/Competitive-Programming"
ARCHIVE_DIR = os.path.join(BASE_DIR, "Archive")
WORKSPACE_DIR = os.path.join(BASE_DIR, "Workspace")

TOPIC_PRIORITY = [
    ("dp", "Dynamic_Programming"),
    ("graphs", "Graphs"),
    ("dfs and similar", "Graphs"),
    ("shortest paths", "Graphs"),
    ("trees", "Graphs"),
    ("data structures", "Data_Structures"),
    ("dsu", "Data_Structures"),
    ("math", "Math"),
    ("number theory", "Math"),
    ("combinatorics", "Math"),
    ("geometry", "Geometry"),
    ("strings", "Strings"),
    ("string suffix structures", "Strings"),
    ("greedy", "Greedy"),
    ("binary search", "Binary_Search"),
    ("two pointers", "Two_Pointers"),
    ("bitmasks", "Bitmasks"),
    ("constructive algorithms", "Constructive_Algorithms"),
    ("sortings", "Sorting"),
    ("brute force", "Implementation"),
    ("implementation", "Implementation"),
]

def normalize_name(name):
    # Remove all non-alphanumeric chars and lowercase
    return re.sub(r'[^a-z0-9]', '', name.lower())

def get_primary_topic(tags):
    for tag, folder in TOPIC_PRIORITY:
        if tag in tags:
            return folder
    return "Miscellaneous"

print("Fetching Codeforces problems...")
req = urllib.request.Request(API_URL)
with urllib.request.urlopen(req) as response:
    data = json.loads(response.read().decode())

problems = data['result']['problems']
print(f"Fetched {len(problems)} problems.")

# Build mapping
name_to_topic = {}
for p in problems:
    norm = normalize_name(p['name'])
    topic = get_primary_topic(p.get('tags', []))
    name_to_topic[norm] = topic
    
    # Also map with index included in case filename includes it without separator
    # e.g., "A. Bit++" -> "abit"
    norm_with_index = normalize_name(p['index'] + p['name'])
    if norm_with_index not in name_to_topic:
        name_to_topic[norm_with_index] = topic

print("Reorganizing files...")

# Ensure directories exist
for _, folder in TOPIC_PRIORITY:
    os.makedirs(os.path.join(ARCHIVE_DIR, folder), exist_ok=True)
os.makedirs(os.path.join(ARCHIVE_DIR, "Miscellaneous"), exist_ok=True)

moved_count = 0
unmatched_count = 0

for root, dirs, files in os.walk(BASE_DIR):
    # Skip .git, .idea, .vscode, .cph, TREM, Workspace, Archive
    if any(skip in root for skip in [".git", ".idea", ".vscode", ".cph", "TREM", "Workspace", "Archive"]):
        continue
    
    for file in files:
        if not file.endswith(".cpp"):
            continue
            
        if file == "template.cpp":
            continue
            
        filepath = os.path.join(root, file)
        
        # Try to extract the problem name from the filename
        # Common formats: A_Bit.cpp, C_1_Name.cpp, Name.cpp, 1709D.cpp
        filename_no_ext = os.path.splitext(file)[0]
        
        # Strip leading letters and underscores (e.g., "A_", "C_1_")
        clean_name = re.sub(r'^[A-Z](_[0-9]+)?_', '', filename_no_ext)
        
        norm_file = normalize_name(clean_name)
        norm_full = normalize_name(filename_no_ext)
        
        topic = "Miscellaneous"
        if norm_file in name_to_topic:
            topic = name_to_topic[norm_file]
        elif norm_full in name_to_topic:
            topic = name_to_topic[norm_full]
        elif clean_name.lower().replace("_", "") in name_to_topic:
            topic = name_to_topic[clean_name.lower().replace("_", "")]
        else:
            # Fallback: maybe strip "easy version" or "hard version"
            stripped = clean_name.lower().replace("easy_version", "").replace("hard_version", "")
            norm_stripped = normalize_name(stripped)
            if norm_stripped in name_to_topic:
                topic = name_to_topic[norm_stripped]
            else:
                unmatched_count += 1
                # print(f"Unmatched: {file}")
                
        dest_folder = os.path.join(ARCHIVE_DIR, topic)
        dest_path = os.path.join(dest_folder, file)
        
        # Handle duplicates (e.g. if A_Bit.cpp was in multiple folders)
        if os.path.exists(dest_path):
            base, ext = os.path.splitext(file)
            dest_path = os.path.join(dest_folder, f"{base}_alt{ext}")
            
        shutil.move(filepath, dest_path)
        moved_count += 1

print(f"Moved {moved_count} problems. {unmatched_count} put into Miscellaneous (or matched loosely).")
