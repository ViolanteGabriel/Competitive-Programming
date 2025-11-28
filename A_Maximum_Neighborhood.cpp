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
    
    vector<vector<int>> grid(n + 2);
    int cnt = 1;

    // Adicionamos n + 2 zeros na linha 0;
    forn(i, n+2)
        grid[0].push_back(0);

    // Adicionamos n + 2 zeros na linha n + 1;
    forn(i, n+2)
        grid[n+1].push_back(0);

    for(int i = 1; i < n + 1; i++) {
        grid[i].push_back(0);
        for(int j = 1; j < n + 1; j++) {
            grid[i].push_back(cnt);
            cnt++;
        }
        grid[i].push_back(0);
    }

    int ans = 0;
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < n + 1; j++) {
            int sum = 0;

            sum += grid[i][j];
            sum += grid[i + 1][j];
            sum += grid[i - 1][j];
            sum += grid[i][j + 1];
            sum += grid[i][j - 1];
            if (sum > ans)
            ans = sum;
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



