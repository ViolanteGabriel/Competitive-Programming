#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    string s; cin >> s;
    vector<int> lowerIndexes, upperIndexes;
    forn(i, s.size()){
        if (s[i] == 'b'){
            if (lowerIndexes.size() > 0)
                lowerIndexes.pop_back();
        }
        else if (s[i] == 'B'){
            if (upperIndexes.size() > 0)
                upperIndexes.pop_back();
        }
        else if (s[i] >= 97)
            lowerIndexes.push_back(i);
        else 
            upperIndexes.push_back(i);
    }
    lowerIndexes.insert(lowerIndexes.end(), upperIndexes.begin(), upperIndexes.end());
    sort(lowerIndexes.begin(), lowerIndexes.end());
    for_each(i, lowerIndexes)
        cout << s[i];
    cout << endl;
}

int32_t main(){
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}