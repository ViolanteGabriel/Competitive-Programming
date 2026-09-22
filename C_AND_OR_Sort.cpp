/*
    Author: Gabriel Violante
    CF Handle: SUPER_ZOIAO
    Federal University of Minas Gerais (UFMG)
*/

#include <bits/stdc++.h>

using namespace std;

// Definitions and Macros

#define int long long 
#define printv(v) { for(auto& _xL : (v)) cout << _xL; cout << endl; } // Change the " " to eliminate/add spaces
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define forn(i, n) for (int i = 0; i < n; i++)
#define endl '\n'

// Useful Constants
int INF = 0x3f3f3f3f;
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
    
    bool sorted = true;
    int uns = 0, zeros = 0, quebras = 0;

    if (s[0] == '0') zeros++;
    if (s[0] == '1') uns++;

    for(int i = 1; i < n; i++) {
        if (s[i] < s[i-1]) {
            sorted = false;
            quebras++;
        }
        if (s[i] == '0') zeros++;
        if (s[i] == '1') uns++;
    }

    if (sorted == true){ cout << 0; return; }

    if (s[0] == '1') { cout << zeros; return; }

    if (s[0] == '0') {
        vector<int> unsEsquerda(n, 0), zerosDireita(n, 0);
        int cnt1 = 0, cnt0 = 0;

        for (int i = 1, j = n-2; i < n and j >= 0; i++, j--)
        {
            if (s[i-1] == '1') cnt1++;
            if (s[j+1] == '0') cnt0++;
            unsEsquerda[i] = cnt1;
            zerosDireita[j] = cnt0;
        }

        int ans = INF;
        for (int i = 0; i < n; i++)
        {
            int sol = unsEsquerda[i] + zerosDireita[i];
            if (sol < ans) ans = sol;
        }
        cout << min(uns, ans);
        
    }
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