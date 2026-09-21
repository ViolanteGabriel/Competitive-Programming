#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

bool ehPrimo(int numero) {
    if (numero <= 1) return false;

    for (int i = 1; i*i <= numero; i++)
    {
        if (numero % i == 0 and (i != 1 and i != numero)) return false;
    }
    return true;
}

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    forn(i, n) {
        cin >> a[i];
    }

    for_each(number, a) {
        int raiz = sqrt(number);
        if (ehPrimo(raiz) and (int)(raiz * raiz) == number)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    // Um numero eh um T-primo sse ele eh o quadrado de um primo
    return;
}

int32_t main(){
    solve();
    return 0;
}



