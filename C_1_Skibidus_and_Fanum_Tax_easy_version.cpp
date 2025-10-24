#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < m; i++)
        cin >> b[i];
    
    int peso = b[0];


    // Resolver o caso para tamanho 2;

    int anterior = INT_MIN;

    for (int i = 0; i < n; i++) {   
        int Min = min(a[i], peso - a[i]);
        int Max = max(a[i], peso - a[i]);

        if (Min >= anterior) {
            anterior = Min;
            a[i] = Min;
        }
        else if (Max >= anterior) {
            anterior = Max;
            a[i] = Max;
        }
        else {
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
    return;
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}