#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < (n); i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n, k;
    cin >> n >> k;
    int cnt = 0;

    // Observe que os numeros que sao divisiveis por n, sao seus multiplos, portanto, se 
    // que queremos o k-esimo numero que nao eh divisivel por n.

    // Se k for menor do que n, note que a resposta eh K.


    // Se k for maior do que n, note a resposta sera K + o numero de multiplos de n em k.
    // Contudo note que se esse novo numero tiver novos multiplos de n novos, devemos aumentar a quantidade da resposta correspondente
    // podemos checar se a quantidade de multiplos anterior eh igual a atual.
    // adicionamos a diferenca caso contrario, se forem iguais, retorne;

    int ans = k;
    int multiplos_anteriores = k / n; // 13
    int diferenca = multiplos_anteriores;
    while (true) {
        ans += diferenca; // ans = 110 // 112 // 113
        int multiplos_atuais = ans / n; // multiplos_atuais = 15 // 16 // 16

        if (multiplos_anteriores < multiplos_atuais) {
            diferenca = multiplos_atuais - multiplos_anteriores; // multiplos anteriores = 2 // 1
            multiplos_anteriores = multiplos_atuais; // 15 // 16
        }
        else {
            cout << ans << endl;
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



