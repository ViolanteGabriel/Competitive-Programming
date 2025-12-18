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
    vector<int> b(n);
    int score_ajisai = 0;
    int score_mai = 0;
    forn(i, n) 
        {cin >> a[i]; score_ajisai += a[i];}
    forn(i, n)
        {cin >> b[i]; score_mai += b[i];}

    int score_final = 0;
    forn(i, n) 
        score_final = score_final xor a[i] xor b[i];

    bitset<64> binario(score_final);
    int msb_diferente = -1;
    for (int i = 0; i < binario.size(); i++) {
        if (binario[i] == 1)
            msb_diferente = i;
    }
    if (msb_diferente == -1)
        {cout << "Tie" << endl; return;}
    
    vector<int> novo_a, novo_b;
    forn(i, n) {
        bitset<64> temp_a(a[i]);
        bitset<64> temp_b(b[i]);
        novo_a.pb(temp_a[msb_diferente]);
        novo_b.pb(temp_b[msb_diferente]);
    }
    // Agora basta aplicar a solução do problema facil.
    int ultimo_index_diferente = -1;
    forn(i, n) {
        if (novo_a[i] != novo_b[i])
            ultimo_index_diferente = (i+1);
    }
    if (ultimo_index_diferente % 2 == 0)
        cout << "Mai" << endl;
    else
        cout << "Ajisai" << endl;

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