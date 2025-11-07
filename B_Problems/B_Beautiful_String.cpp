#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> indexes;
    bool hasOne;
    bool hasZero;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1') hasOne = true;
        else hasZero = true;
    }
    
    if(hasOne and hasZero) {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1') indexes.push_back(i+1);
        }

        cout << indexes.size() << endl;
        for (int i = 0; i < indexes.size(); i++)
        {
            cout << indexes[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << s.size() << endl;
        for (int i = 0; i < s.size(); i++)
        {
            cout << i << " ";
        }
        
    }
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}