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
    
    // 1 3 4 5 6 2
    // 1 3 4 5 2
    // 1 3 4 2
    // 1 4 2
    // 1 2

    // Queremos construir uma permutacao que maximize numero de operacoes, onde
    // uma operacao pode ser realizada quando os termos a direita e esquerda sao
    // menores.

    // Numero minimo de operacoes = N - 2
    // Mas como construir?

    vector<int> ans(n);
    ans[0] = 1;
    ans[n-1] = 2;
    for (int i = 1, cnt = 3; i < n-1; i++, cnt++)
        ans[i] = cnt;
    forn(i, n)
        cout << ans[i] << " ";
    cout << endl;
    

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