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
    string n; cin >> n;

    int ans = -1;
    bool primeiro_numero = false;
    for (int i = n.size()-1; i >= 0; i--) {
        if (n[i] != '0') {
            ans++;
            primeiro_numero = true;
        }
        else if (n[i] == '0' and primeiro_numero == false)
            ans++;
    }
    


    cout << ans << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}


// APRENDIZADO, PARA TRABALHAR COM GRANDES NUMEROS EM FORMATO DECIMAL,
// PODE SER MUITO UTIL UTILIZAR STRINGS!!!!!!!



