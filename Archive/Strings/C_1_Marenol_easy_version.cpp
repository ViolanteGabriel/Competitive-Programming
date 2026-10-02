/*
    Author: Gabriel Violante
    CF Handle: SUPER_ZOIAO
    Federal University of Minas Gerais (UFMG)
*/

#include <bits/stdc++.h>

using namespace std;

// Definitions and Macros
#define int long long 

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
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;
    
    int ones_a = count(all(a), '1');
    int ones_b = count(all(b), '1');
    if (ones_a != ones_b or (a != b and n < 3)) {
        cout << "NO" << endl;
        return;
    } else if (a == b) {
        cout << "YES" << endl;
        return;
    }

    int pairs_a = 0, pairs_b = 0;
    forn(i,n) {
        if (i%2==0 and a[i] == '1')
            pairs_a++;

        if (i%2==0 and b[i] == '1')
            pairs_b++;
    }

    if (pairs_a == pairs_b){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
 }

// Main
int32_t main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}