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
    
    sort(b.begin(), b.end());


    int anterior = INT_MIN;
    for (int i = 0; i < n; i++) {   

        // Como escolher o peso para essa iteracao? Note que nao gastamos os elementos. E, na pratica, queremos 
        // o menor maior valor que o elemento anterior, para isso, devemos computar todos os valores de peso - atual (impraticavel)
        // solucao: realizar algum tipo de busca binaria que nos acelera esse processo.
        // no geral, o que determina o menor valor de peso - atual? quanto menor for essa diferenca.
        // contudo note que isso tambem deve ser maior do que o valor anterior.      

        int atual = a[i];
        auto posicao = lower_bound(b.begin(), b.end(), anterior + atual);

        if (posicao == b.end()) {
            if (atual >= anterior)
                anterior = atual;
            else {
                cout << "NO" << endl;
                return;
            }
        }

        else {
            int peso = *(posicao);

            int Min = min(peso - atual, atual);
            int Max = max(peso - atual, atual);

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