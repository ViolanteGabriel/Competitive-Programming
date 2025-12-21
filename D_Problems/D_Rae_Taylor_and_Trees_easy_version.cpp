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
    
    vector<int> a(n);
    forn(i, n)
        cin >> a[i];
    
    // Vetores DP
    vector<int> pre(n), suf(n);

    int menor_pre = a[0];
    for (int i = 0; i < n; i++) {
        if (menor_pre > a[i]) menor_pre = a[i];
        pre[i] = menor_pre;
    }

    int maior_suf = a[n-1];
    for (int i = n-1; i >= 0; i--) {
        if (maior_suf < a[i]) maior_suf = a[i];
        suf[i] = maior_suf;
    }

    for (int i = 0; i < n-1; i++) {
        if (pre[i] > suf[i+1]) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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