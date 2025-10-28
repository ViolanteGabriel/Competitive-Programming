#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void fatorar(int number, set<int>& divisores) {
    if (number == 1) {
        divisores.insert(1);
        return;
    }
 
    for (int i = 1; i*i <= number; i++)
    {
        if (number % i == 0) {
            divisores.insert(i);
            divisores.insert(number/i);
        }
    }
}

void solve(){
    int n;
    cin >> n;

    unordered_set<int> a;
    int menor = INT_MAX;
    forn(i, n) {
        int aux;
        cin >> aux;

        if (aux < menor)
            menor = aux;

        a.insert(aux);
    }
    
    for (int i = 2; i < INT_MAX; i++)
    {
        for_each(numero, a) {
            int mdc = gcd(numero, i);
            if (mdc == 1) {
                cout << i << endl;
                return; 
            }
        }
    }
    cout << -1 << endl;


}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}