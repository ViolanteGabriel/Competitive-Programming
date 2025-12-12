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
    int n, k;
    cin >> n >> k;

    // Um segredo com N palavras que eh dividido entre 4 guardioes da seguinte forma:
    /*
        - Sets disjuntos
        - Uniao dos sets deve conter todas as N palavras
        - Em cada set, nao podemos formar uma PA.

    Queremos encontrar K particoes que satisfaçam essas condições.

    !!!!! Todos os sets devem ter pelo menos tamanho 3.
    !!!!! Se N / K < 3, teremos pelo menos 1 set de tamanho < 3.
    !!!!! Se n / K > 3, consiguimos sempre formar K setsque não formam uma PA? -> Podemos formar uma Pa simples, e trocar os primeiros termos de todo mundo.
    */

    // 1 2 1 2 1 2


    if (n / k < 3 or k == 1) {cout << -1 << endl; return;}
    vector<int> ans;
    for (int i = 0, k_atual = 1; i < 2*(k); i++, k_atual++)
    {
        if (k_atual > k) k_atual = 1;
        ans.pb(k_atual);
    }
    
    vector<int> padrao;
    forn(i, k)
        padrao.pb(i + 1);
    rotate(padrao.begin(), padrao.begin() + 1, padrao.end());

    for (int i = 0, padrao_cnt = 0; i < n - 2*(k); i++, padrao_cnt++)
    {
        if (padrao_cnt == padrao.size()) padrao_cnt = 0;
        ans.pb(padrao[padrao_cnt]);
    }
    
    
    forn(i, n)
        cout << ans[i] << " ";
    cout << endl;
    
}

// Main
int32_t main() {
    fast_io();
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}