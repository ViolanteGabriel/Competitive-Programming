#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == b and a == c and a == d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}