#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < int(n); i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n, y, r;
    cin >> n >> y >> r;

    int ans = r;
    ans += (y/2);
    if (ans > n) cout << n << endl;
    else cout << ans << endl;
    
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}



