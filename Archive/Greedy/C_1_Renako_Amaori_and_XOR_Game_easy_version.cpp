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
    forn(i, n) 
        cin >> a[i];
    forn(i, n)
        cin >> b[i];

    // Ajisai -> IMPAR
    // Mai ->    PAR

    // O score máximo que pode ser obtido é 1, quando alguem tiver um número ímpar de 1's.
    // Note que a jogada ótima, configura trocar quando o nosso numero de impares é par.

    int score_a  = 0, score_b = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1) score_a++;
        if (b[i] == 1) score_b++;
    }

 
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) {
            // Turno do Mai
            if (score_a % 2 == 0) {
                if (a[i] != b[i]) {
                    if (a[i] == 0) {
                        score_a++;
                        score_b--;
                    }
                    else {
                        score_a--;
                        score_b++;
                    }
                }
                int aux = a[i];
                b[i] = a[i];
                a[i] = aux;
            }
        }
        else {
            // Turno do Ajisai
            if (score_b % 2 == 0) {

                if (a[i] != b[i]) {
                    if (a[i] == 0) {
                        score_a++;
                        score_b--;
                    }
                    else {
                        score_a--;
                        score_b++;
                    }
                }
                int aux = a[i];
                b[i] = a[i];
                a[i] = aux;    
            }
        }
    }

    // cout << "Score A (Ajisai): " << score_a << endl;
    // cout << "Score B (Mai): " << score_b << endl;
    score_a = score_a % 2;
    score_b = score_b % 2;
    if (score_a > score_b)
        cout << "Ajisai" << endl;
    else if (score_a < score_b)
        cout << "Mai" << endl;
    else
        cout << "Tie" << endl;

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