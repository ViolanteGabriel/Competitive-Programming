#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, j, k;
    cin >> n >> j >> k;

    j--;

    vector<int> a;
    int menor = INT_MIN;
    bool igual = false;
    forn(i, n) {
        int aux;
        cin >> aux;
        a.push_back(aux);
        if (aux > menor)
            menor = aux;
    }

    forn(i, n) {
        if (a[j] == a[i] and i!= j)
            igual = true;
    }

    if (k == 1) {
        // a[j] deve ser o meno elemento do vetor.
        if (menor == a[j])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    else
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