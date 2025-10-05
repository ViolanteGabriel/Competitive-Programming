#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<vector<int>> adj_list(n);
    for (int i = 0; i < n-1; i++) 
    {
        int v, w;
        cin >> v >> w;

        v--;
        w--;

        adj_list[v].push_back(w);
        adj_list[w].push_back(v);
    }
    // Aqui já temos a lista de adjacência

    if (n == 2) {
        cout << 0 << endl;
        return;
    }

    int nfolhas = 0;
    int nfolhas_vizinhas_max = 0;
    unordered_set<int> folhas;

    for (int i = 0; i < n; i++)
    {
        if (adj_list[i].size() == 1) {
            nfolhas++;
            folhas.insert(i);
        }    
    }
    // Aqui já temos todas as folhas

    for (int i = 0; i < n; i++)
    {
        int nfolhas_vizinhas_atuais = 0;
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            if (folhas.count(adj_list[i][j])) {
                nfolhas_vizinhas_atuais++;
            }
        }
        if (nfolhas_vizinhas_atuais > nfolhas_vizinhas_max) {
            nfolhas_vizinhas_max = nfolhas_vizinhas_atuais;
        }
    }
    
    cout << nfolhas - nfolhas_vizinhas_max << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}