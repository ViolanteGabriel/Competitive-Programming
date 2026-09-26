/*
    Author: Gabriel Violante
    CF Handle: SUPER_ZOIAO
    Federal University of Minas Gerais (UFMG)
*/

#include <bits/stdc++.h>

using namespace std;

// Definitions and Macros
// #define int long long 

#define printv(v) { for(auto& _xL : (v)) cout << _xL; } // Change the " " to eliminate/add spaces
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define forn(i, n) for (int i = 0; i < n; i++)
#define endl '\n'

// Useful Constants
const int INF = 1e18;
const int MOD = 1e9 + 7;

// Fast I/O
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// Debugging
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

// Problem Solution
void solve() {
    int n, k;
    cin >> n >> k;
    
    if (k < n or k >= 2*n){
        cout << -1 << endl;
        return;
    }

    // We initialize nxn matrix
    vector< vector<int> > matrix(n, vector<int>(n, -1));

    int acc = 1;
    for (int i = 0; i < 2*n - k; i++, acc++)
        matrix[i][i] = acc;

    for (int j = acc - 1; j < n; j++, acc++)
        matrix[0][j] = acc;

    for (int i = acc - 1; i < n; i++, acc++)
        matrix[i][0] = acc;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == -1) {
                matrix[i][j] = acc;
                acc++;
            }
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

// Main
int32_t main() {
    fast_io();
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}