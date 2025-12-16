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

    /*
    note que todos os numeros necessariamente devem se tornar 0`s
    simultanemanete, nesse sentido, temos um numero fixo de operacoes
    x e y sendo:
    x = numero de operacoes do Tipo I   (ai - i)
    y = numero de operacoes do Tipo II  (ai - (n-i+1))

    Nesse sentido, note que podemos calcular cada termo com a seguinte
    equacao:
    a1 = x + Ny
    a2 = 2x + (N - 1)y
    a3 = 3x + (N - 2)y
    .
    .
    .
    an = Nx + y

    observe que se existirem dois valores quaisqueres de x e y que
    satisfacam todos os casos, a resposta eh sim. Note que devemos
    verificar se x e y são ambos positivos também.

    tome a1 = a, a2 = b.

    a = x + ny
    x = a - ny

    b = 2x + (n-1)y
    b = 2(a-ny) + (n-1)y
    b = 2a - 2ny + ny - y
    b = 2a - ny - y
    b = 2a - y(n + 1)
    (b - 2a)/(n+1) = -y

    y = -(b-2a)/(n+1)
    x = a - ny 

    depois disso, basta veriricar se os valores de x e y sao positivos e se satisfazem
    a formula para todos os elementos do vetor.
    */

    int y = -(a[1] - 2*a[0])/(n + 1);
    int x = a[0] - n*y;

    if (x < 0 or y < 0) {cout << "NO" << endl; return;}
    forn(i, n) {
        if (a[i] != x*(i + 1) + y*(n - (i+1) + 1)){
            cout << "NO" << endl;
            return;
        } 
    }
    cout << "YES" << endl;
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