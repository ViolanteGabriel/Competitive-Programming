#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> b(n);
    set<int> fns;

    forn(i, n) {
        int aux;
        cin >> aux;
        b[i] = aux;
        fns.insert(aux);
    }

    vector<int> a(n);

    for_each(frec, fns) {
        int counter = 0;
        int representant = 1;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == frec) {
                a[i] = representant;
                counter++;
                if (counter % frec == 0)
                    representant++;
            }
        }
        if (counter % frec != 0) {
            cout << -1 << endl;
            return;
        }
        
    }
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}