#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < (n); i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> b;

    forn(i, n)
        {int aux; cin >> aux; b.push_back(aux);}

    // Consideracoes?

    // Queremos encontrar o maior tamanho de subsegmento de forma que a tenha
    // todos os elemetos iguais a b.

    // Precisamos performar exatamente n acoes.

    // Note que provavelmente conseguimso calcular a resposta com o somatorio de b e
    // o numero de elementos diferentes de 0.

    // O que queremos fazer eh pegar o numero de a diferenca de n e o somatorio de b
    // e com o que sobrar, sera o tamanho do segmento, limitado por n - numero de zeros.
    int sumb = 0;
    int nzeros = 0;
    forn(i, n){
        sumb += b[i];
        if (b[i] == 0)
            nzeros++;    
    }

    int tam_max = n - nzeros; // Subsegmento de tamanho maximo;

    if (n < sumb) {
        // Logica principal
        while (tam_max + n-1 > sumb) {
            tam_max--;
        }
        cout << tam_max << endl;
    }
    else {
        cout << 1 << endl;
        return;
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



