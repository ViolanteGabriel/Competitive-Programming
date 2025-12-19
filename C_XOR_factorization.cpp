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
    
    // Provalvelmente eh um problema construtivo, guloso, dp, bitwise e XOR.
    // PENSAR NAS PROPRIEDADES DO XOR.
    // Se fosse apenas encontrar uma fatoracao, bastaria pegar todos zeros e printar o ultimo elemento.
    // NOTE QUE, queremos maximizar a soma de todo mundo, evidentemente, devemos entao olhar para os
    // MSB's.
    // NOTE QUE, vamos construir a resposta a partir de N.

    // Divida o problema em dois subcasos, K par e K impar.

    /*
    EXEMPLO 1 (5 4)
    0101

    Fatoramos em 4 termos da seguinte forma (K PAR)
    0101
    0101
    0101
    0000

    = 15


    2) 4 e 3
    100
    4
    4
    4

    3) 8 e 4
    1000

    

    4) 10 e 2
    1010

    1010 10
    1010 10
    1001 9
    0011 3

    SOMA 12


    5) 6 e 2
    110

    101 5
    011 3

    resultado = 8


    QUEREMOS MAXIMIZAR A SOMA, AO PASSO QUE MAXIMIZAMOS 
    */
    int ans = 0;
    if (k % 2 == 0) {               // PROVAVELMENTE TEM UM CORNER CASE AQUI

    }
    if (k % 2 != 0) {
        // Teremos k n's            COM CERTEZA ESTA CERTO
        forn(i, k)
            cout << n << " ";
        cout << endl;
    }

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