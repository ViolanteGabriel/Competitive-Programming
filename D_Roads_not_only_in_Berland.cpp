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

   vector<vector<int>> graph(n);
   vector<unordered_set<int>> ds;
    unordered_set<int> rvs(n);

   for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        rvs.insert(u);
        rvs.insert(v);
    }
   
    // Detectar as componentes conexas;

}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}