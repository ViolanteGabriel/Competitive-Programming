#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, m, n_difs = 0, vax = 0;
    cin >> n;
    vector<int> a(n);
    forn(i, n)
        cin >> a[i];

    vector<int> b(n);
    forn(i, n)
        cin >> b[i];

    cin >> m;
    vector<int> d(m);
    forn(i, m)
        cin >> d[i];

    forn(i, n){
        if (a[i] != b[i])
            n_difs++;
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (d[i] == b[j] and a[j] != b[j]){
                n_difs--;
                break;
            }
            else if(d[i] == b[j] and vax == 1){
                n_difs--;
                vax = 0;
                break;
            }
            else if (d[i] == b[j]){
                continue;
            }
            if (j == n-1 and n_difs == 0){
                n_difs++;
                vax = 1;
            }
        }
    }

    if (n_difs == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}