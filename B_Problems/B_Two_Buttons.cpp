#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

int bfs(vector<vector<int>> grafo) {

}

void solve(){
    int n, m;
    cin >> n >> m;

    if (n >= m) {
        cout << n - m << endl;
        return;
    }

    int cnt1 = 0;
    int cnt2 = 0;
    int n1 = n, n2 = n;
    if (n >= m/2) {
        if (m % 2 == 0) {

            // Volta até n/2 e multiplica por 2;
            n1 = m/2;
            cnt1 = n1 - m/2;
            cnt1++;

            // Avanca ate m+ e regride
            int teto = (m + n -1) / n;
            std::bit_width(teto - 1);
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



