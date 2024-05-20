#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int x, y; cin >> x >> y;
    int ans, aux;
    ans = y / 2 + y % 2;
    aux = (ans * 15) - (4 * y);
    while (aux - x < 0){
        aux += 15;
        ans++;
    }
    cout << ans << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}