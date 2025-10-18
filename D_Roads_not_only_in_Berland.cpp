#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long
#define pb push_back

using namespace std;

void solve(){
   int n;
   cin >> n; 

    vector<vector<int>> graph(n);
    vector<unordered_set<int>> comp_conexas;
    vector<pair<int, int>> ciclos;
    vector<int> pai(n, -1);

    unordered_set<string> ciclos_incluidos;

    unordered_set<int> visitados;

   for (int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
        
    }

    for (int i = 0; i < n; i++)
    {
        if (visitados.count(i) != 0) 
            continue;

        stack<int> pilha;
        pilha.push(i);
        visitados.insert(i);

        unordered_set<int> comp_conexa;
        while(!pilha.empty()) {

            int current_vertex = pilha.top();
            pilha.pop();
            comp_conexa.insert(current_vertex);

            for (int j = 0; j < graph[current_vertex].size(); j++)
            {
                int vizinho = graph[current_vertex][j];
                
                if (visitados.count(vizinho) == 0) {

                    visitados.insert(vizinho);
                    pilha.push(vizinho);
                    pai[vizinho] = current_vertex;
                }
                    
                else if (vizinho != pai[current_vertex]) { // Se o vizinho for diferente do pai
                    string s1 = to_string(current_vertex);
                    string s2 = to_string(vizinho);

                    if (ciclos_incluidos.count(s1 + " X " + s2) == 0) {
                        // cout << "ciclo inserido" << endl;
                        ciclos.pb({current_vertex, vizinho});
                        ciclos_incluidos.insert(s1 + " X " + s2);
                    }
                }
            }
        }
        comp_conexas.pb(comp_conexa);
        
    }

    cout << comp_conexas.size() - 1 << endl;
    for (int i = 0; i < comp_conexas.size()-1; i++)
        cout << (ciclos[i].first) + 1 << " " << (ciclos[i].second) + 1 << " " << *(comp_conexas[i].begin()) + 1 << " " << *(comp_conexas[i+1].begin()) + 1 << endl;
    
}

int32_t main(){
    // int t;
    // cin >> t;
    // while(--t)
    //     solve();
    solve();
    return 0;
}