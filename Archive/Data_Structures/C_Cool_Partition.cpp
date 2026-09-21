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

    // Basicamente, todas as particoes devem ter os mesmos elementos, EXCETO A ULTIMA.
    // Note que o problema não pede para obter as particoes, mas sim, a quantidade
    // de subsegmentos que compoem a a particao maneira.
    // AS PARTICOES DA FRENTE PODEM TER TERMOS INEDITOS!!!!!!!


    // Greedy Approach
    // Sets?

    unordered_set<int> seg_anterior, seg_atual; // Elementos do seg anterior.
    int contador = 0;   
    int ans = 1;

    forn(i, n) {
        // Passo base
        if (i == 0) {
            seg_anterior.insert(a[i]);
            seg_atual = seg_anterior;
        }
        else {
            seg_anterior.erase(a[i]);
            seg_atual.insert(a[i]);

            if (seg_anterior.size() == 0) {
                ans++;
                seg_anterior = seg_atual;
            }
        }        
    }

    cout << ans << endl;
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