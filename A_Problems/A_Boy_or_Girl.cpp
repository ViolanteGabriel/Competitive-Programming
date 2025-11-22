#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    string s;
    cin >> s;
    unordered_set<char> distintos;

    for (int i = 0; i < s.size(); i++)
        distintos.insert(s[i]);
        
    if (distintos.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}

int32_t main(){
    solve();
    return 0;
}



