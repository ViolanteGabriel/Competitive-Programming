#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, m, ans = 0; cin >> n >> m;
    string x, s; cin >> x >> s;   

    forn(i, n){
        if (x[i] == s[0]){
            forn(j, m){
                if(x[i+j] != s[j])
                    break;
                if(j == m - 1){
                    cout << ans << endl;
                    return;
                }
            }
        }
    }

    do{
        n *= 2;
        x += x;
        ++ans;
        forn(i, n){
        if (x[i] == s[0]){
            forn(j, m){
                if(x[i+j] != s[j])
                    break;
                if(j == m - 1){
                    cout << ans << endl;
                    return;
                }
            }
        }
    }
    }while(n <= m*2);

    forn(i, n){
        if (x[i] == s[0]){
            forn(j, m){
                if(x[i+j] != s[j])
                    break;
                if(j == m - 1){
                    cout << ans << endl;
                    return;
                }
            }
        }
    }
    cout << -1 << endl;
}

int32_t main(){
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}