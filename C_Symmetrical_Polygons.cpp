#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto& i : container)
#define int long long
#define endl '\n'

using namespace std;

bool eh_convexo(map<int, int>& arestas_pares, int maior_lado_candidato) {
    long long soma_outros_lados = 0;
    for (auto const& [comprimento, frequencia] : arestas_pares) {
        soma_outros_lados += comprimento * frequencia;
    }

    return soma_outros_lados > maior_lado_candidato;
}

bool eh_convexo_3(map<int, int>& arestas_com_par, int l_longo, int l_curto) {
    long long soma_total_pares = 0;

    for (auto const& [comprimento, frequencia] : arestas_com_par) {
        soma_total_pares += comprimento * frequencia;
    }
    return soma_total_pares > (l_longo - l_curto);
}

void solve(){
    int n;
    cin >> n;

    map<int, int> arestas;
    for (int i = 0; i < n; i++) {
        int aresta;
        cin >> aresta;
        arestas[aresta]++;
    }

    map<int, int> arestas_sem_par;
    map<int, int> arestas_com_par;

    for_each(valor, arestas) {
        if (valor.second % 2 == 0) {
            arestas_com_par[valor.first] = valor.second;
        } else {
            arestas_sem_par[valor.first] = 1; 
            if (valor.second > 1) {
                arestas_com_par[valor.first] = valor.second - 1;
            }
        }
    }

    long long caso_1 = 0;
    if (arestas_com_par.size() >= 2) { 
        long long soma_pares = 0;
        for_each(frequencia, arestas_com_par) {
            soma_pares += frequencia.first * frequencia.second;
        }
        
        int maior_par = arestas_com_par.rbegin()->first; 
        
        if ((soma_pares - maior_par * 2) > maior_par * 2) {
             caso_1 = soma_pares;
        }
    }


    long long perma_caso_2 = 0;
    if (!arestas_com_par.empty()) {
        long long soma_pares_total = 0;
        for(auto const& [comp, freq] : arestas_com_par) {
            soma_pares_total += comp * freq;
        }

        for (auto const& [aresta_impar, freq] : arestas_sem_par) {
            if (soma_pares_total > aresta_impar) {
                perma_caso_2 = max(perma_caso_2, soma_pares_total + aresta_impar);
            }
        }
    }


    long long perma_caso_3 = 0;
    if (arestas_sem_par.size() > 1 && !arestas_com_par.empty()) {
        
        auto it = --arestas_sem_par.end();

        while (it != arestas_sem_par.begin()) {
            auto l_longo_it = it;
            auto l_curto_it = std::prev(it); 

            int l_longo = l_longo_it->first;
            int l_curto = l_curto_it->first;

            if (eh_convexo_3(arestas_com_par, l_longo, l_curto)) {
                long long soma_total_pares = 0;
                for (auto const& [comprimento, frequencia] : arestas_com_par) {
                    soma_total_pares += comprimento * frequencia;
                }
                
                long long perimetro_atual = l_longo + l_curto + soma_total_pares;
                perma_caso_3 = max(perma_caso_3, perimetro_atual);
            }

            --it;
        }
    }
    
    cout << max({caso_1, perma_caso_2, perma_caso_3}) << endl;
}

int32_t main(){
    int t, cnt = 0;
    cin >> t;
    while(--t) {
        cnt++;
        solve();
    }
    solve();

    return 0;
}