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
    int a, b;
    cin >> a >> b;
    
    // COMECANDO COM A
    int index = 0;
    int cnt_atual = a;
    int layers_a = 0;
    int layers_b = 0;

    while (cnt_atual <= a) {
        if (cnt_atual - pow(2, index) >= 0) {
            layers_a++;
            cnt_atual -= pow(2, index);
        }
        else {
            break;
        }
        index+=2;
    }
    cnt_atual = b;
    index = 1;
    while (cnt_atual <= b) {
        if (cnt_atual - pow(2, index) >= 0) {
            layers_b++;
            cnt_atual -= pow(2, index);
        }
        else {
            break;
        }
        index+=2;
    }
    int min_layers = min(layers_a, layers_b);
    int ans_a;

    if (layers_a > min_layers) ans_a = min_layers*2 + 1;
    else ans_a = min_layers*2;

     index = 1;
     cnt_atual = a;
     layers_a = 0;
     layers_b = 0;
    // COMECANDO COM B
    while (cnt_atual <= a) {
        if (cnt_atual - pow(2, index) >= 0) {
            layers_a++;
            cnt_atual -= pow(2, index);
        }
        else {
            break;
        }
        index+=2;
    }
    cnt_atual = b;
    index = 0;
    while (cnt_atual <= b) {
        if (cnt_atual - pow(2, index) >= 0) {
            layers_b++;
            cnt_atual -= pow(2, index);
        }
        else {
            break;
        }
        index+=2;
    }
     min_layers = min(layers_a, layers_b);
    int ans_b;

    if (layers_b > min_layers) ans_b = min_layers*2 + 1;
    else ans_b = min_layers*2;

    cout << max(ans_a, ans_b) << endl;
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