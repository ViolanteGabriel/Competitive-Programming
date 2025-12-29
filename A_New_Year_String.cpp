/*
    Author: Gabriel Violante
    CF Handle: Kordirior
    Federal University of Minas Gerais
*/

#include <bits/stdc++.h>

using namespace std;

// Definitions and Macros
#define int long long 
#define pb push_back
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
    string s;
    cin >> s;

    if (s.find("2026") != string::npos or s.find("2025") == string::npos) {
        cout << 0 << endl;
        return;
    }
    else if (s.find("2025") != string::npos) {
        cout << 1 << endl;
    }


}

// Main
int32_t main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}