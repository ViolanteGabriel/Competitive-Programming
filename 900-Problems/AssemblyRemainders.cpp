#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, aux = 1; cin >> n;
    vector<int> x(n - 1);
    vector<int> a(n);
    forn(i, n - 1)
        cin >> x[i];

    a[0] = x[0] + 1;
    for (int i = 1; i < n; i++){
        aux = a[i - 1];
        while(aux % a[i - 1] != x[i - 1]){
            aux++;
        }
        
        if (aux <= x[i] && i != n - 1)
            aux = x[i] + 1;

        while(aux % a[i - 1] != x[i - 1]){
            aux++;
        }
        a[i] = aux;
    }
    
    forn(i, n) cout << a[i] << " ";
    cout << endl;
}

int32_t main(){
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}