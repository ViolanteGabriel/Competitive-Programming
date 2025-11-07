#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    int ncasas_loop = n*n - k;

    if (n*n -k != 1) {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 and j == 0 and ncasas_loop > 0) {
                    cout << "R";
                    ncasas_loop--; 
                }
                else if (i == 0 and ncasas_loop > 0) {
                    cout << "L";
                    ncasas_loop--;
                }
                else if (ncasas_loop > 0) {
                    cout <<"U";
                    ncasas_loop--;
                }
                else {
                    cout << "D";
                }
            }    
            cout << endl;      
        }
        
    }
    else {
        cout << "NO" << endl;
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