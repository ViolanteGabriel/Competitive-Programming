#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, m, ans = 0, aux = 0;
    cin >> n >> m;
    string s;
    cin >> s;

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < n; j++){
            if (s[j] == (65 + i) and aux < m)
                aux++;
        }
        ans = ans + (m - aux);
        aux = 0;
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