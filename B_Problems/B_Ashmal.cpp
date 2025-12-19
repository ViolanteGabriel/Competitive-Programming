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

    vector<string> a(n);
    forn(i, n)
        cin >> a[i];

    // Problema construtivo & guloso
    // Vamos conferir se a string atual é lexicograficamente menor que o começo da stirng final, se for
    // coloca no inicio

    string ans = "";
    forn(i, n) {
        string s1 = ans + a[i];
        string s2 = ans;
        s2.insert(0, a[i]);
        if (s1 < s2) ans = s1;
        else ans = s2;
    }
    cout << ans << endl;
    return;
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