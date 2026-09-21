/*
    Author: Gabriel Violante
    CF Handle: SUPER_ZOIAO
    Federal University of Minas Gerais (UFMG)
*/

#include <bits/stdc++.h>

using namespace std;

// Definitions and Macros
// #define int long long 

#define printv(v) { for(auto& _xLLL : (v)) cout << _xLLL; } // Change the " " to eliminate/add spaces
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
    int n;
    cin >> n;

    vector<int> b(n);
    vector<int> ans(n, -1);

    forn(i,n)
        cin >> b[i];

    // Condição básica inicial
    forn(i,n) {
        if (b[i] == 0)
            ans[i] = 1;
        if (b[i] != -1 and b[i] != 0) ans[i] = 0; 
    }

    // There MUST be NO treasure between max(0, i - x + 1) and min(n, i + x - 1)
    for (int i = 0; i < n; i++) {
        int x = b[i];

        if (x == -1 or x == 0) continue;

        for (int j = max(0, (i - x + 1)); j <= min(n-1, i + x - 1); j++) {

            if (b[j] == 0) { cout << -1; return; }
            ans[j] = 0; // No treasure
        }
    }

    // Substitute -1 by 1
    forn(i, n) {
        if (ans[i] == -1)
            ans[i] = 1;
    }

    // Verify if the ans is valid
    forn(i, n){
        int x = b[i];
        if (x == -1 or x == 0) continue;
        if (ans[max(0, (i - x))] != 1 and ans[min(n-1, i + x)] != 1) {
            cout << -1;
            return;
        }   
    }

    printv(ans);
    return;
}

// Main
int32_t main() {
    fast_io();
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
        cout << endl;
    }
    
    return 0;
}