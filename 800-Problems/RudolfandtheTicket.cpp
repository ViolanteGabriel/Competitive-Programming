#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, m, k, ans = 0;
    cin >> n >> m >> k;

    vector<int> b(n), c(m);
    forn(i, n)
        cin >> b[i];
    forn(i, m)
        cin >> c[i];

    for (int i = 0; i < n; i++){
        if(b[i] < k){
            for (int j = 0; j < m; j++){
                if (b[i] + c[j] <= k)
                    ans++;
            }
            
        }
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