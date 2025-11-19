#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

// Retorna um set com os divisores de um numero;
unordered_set<int> divisores(int number) {
    unordered_set<int> divisores;
    if (number == 0) {
        divisores.insert(0);
        return divisores;
    } 

    for (int i = 1; i*i <= number; i++)
    {
        if (number % i == 0) {
            divisores.insert(i);
            divisores.insert(number/i);
        }
    }
    return divisores;
}

void solve(){
    int a, b;
    cin >> a >> b;

    int soma1 = a*(b/2) + 2;
    int soma2 = a*b + 1;

    if (b % 2 == 0) {
        if (soma1 % 2 == 0) {
            cout << soma1 << endl;
            return;
        }
        
    }
    else {
        if (soma2 % 2 == 0) {
            cout << soma2 << endl;
            return;
        }
    }
    cout << -1 << endl;
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




