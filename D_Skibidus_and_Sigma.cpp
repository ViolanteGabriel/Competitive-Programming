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

    vector<vector<int>> vetores(n);
    vector<pair<int, int>> indices(n);

    for (int i = 0; i < n; i++) {
        int soma = 0;
        vector<int> sub_vec(m);

        for (int j = 0; j < m; j++) {
            cin >> sub_vec[j];
            soma += sub_vec[j];
        }

        vetores[i] = sub_vec;

        indices[i].first = soma;
        indices[i].second = i;
    }

    sort(indices.begin(), indices.end(), greater<pair<int, int>>());
    
    int ans = 0;
    int prev_sum = 0;

    for (int i = 0; i < n; i++) {
        int indice = indices[i].second;
        
        for (int j = 0; j < m; j++) {
            
            ans += vetores[indice][j] + prev_sum;
            prev_sum += vetores[indice][j];
        }
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