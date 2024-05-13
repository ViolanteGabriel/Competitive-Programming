#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int x, y; cin >> x >> y;
    if (x > y)
        cout << y << " " << x << endl;
    else
        cout << x << " " << y << endl;
}

int32_t main(){
    int nTestes;
    cin >> nTestes;
    while(nTestes--)
        solve();
    return 0;
}