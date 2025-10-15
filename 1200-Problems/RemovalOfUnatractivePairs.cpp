#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

std::pair<char, int> mostFrequentLetter(const std::string& str) {
    std::unordered_map<char, int> frequency;


    for (char ch : str) {
        if (isalpha(ch)) { 
            frequency[ch]++;
        }
    }

    char mostFrequent = '\0';
    int maxFrequency = 0;
    for (const auto& pair : frequency) {
        if (pair.second > maxFrequency) {
            maxFrequency = pair.second;
            mostFrequent = pair.first;
        }
    }

    return std::make_pair(mostFrequent, maxFrequency);
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    auto ans = mostFrequentLetter(s);
    if (ans.second > n/2)
        cout << ans.second - (n - ans.second) << endl;
    else
        cout << n % 2 << endl;
}

int32_t main(){
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}