#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    string pos; cin >> pos;
    char l = pos[1], c = 97;

    forn(i, 8){
        if(pos[0] != c)
            cout << c << l << endl;
        c++;
    }

    c = pos[0];
    l = 49;
    forn(i, 8){
        if(pos[1] != l)
            cout << c << l << endl;
        l++;
    }
}

int32_t main(){
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}