/*
    Author: Gabriel Violante
    CF Handle: SUPER_ZOIAO
    Federal University of Minas Gerais (UFMG)
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
    

    int ans = 0, ones = 0, twos = 0, zeros = 0;
    // zeros = ! multiple of 4
    // one = number of pair's
    // two = number of multiples of 4 

    forn(i, n) {
        if (a[i] % 2 != 0) {
            ones++;
            continue;
        }
        (a[i] % 4 == 0) ? zeros++ : twos = twos + 1; 
    }
    ans = max({zeros, ones, twos});

    cout << ans << endl;
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