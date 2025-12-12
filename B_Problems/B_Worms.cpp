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
    int n; // Number of Piles
    cin >> n;
    
    vector<int> worms_pile(n); // Each pile, has a[i] elements, respectively
    forn(i, n)
        cin >> worms_pile[i];

    int m; // Number of Juicy Worms
    cin >> m;
    vector<int> labels(m);
    forn(i, m)
        cin >> labels[i];

        // Note que o queremos fazer é:
        /*
            para cada minhoca de valor x, queremos mapear para qual pilha ela está.
            Então por exemplo:
            
            Tamanho das Pilhas: 2 7 3 4 9
            Minhos alvo: 1 25 11

            Pilha 0: 1, 2
            Pilha 1: 3, 4, 5, 6, 7
            ...

            PODEMOS CRIAR UM MEGA VETOR ORDENADO COM TODAS AS MINHOCAS, QUE ARMAZENA O INDEX DA MINHOCA
            E O INDEX DA PILHA.
        */

    vector<pair<int, int>> all_worms_sorted;
    for (int i = 0, indice_minhoca = 1; i < n; i++) {
        for (int j = 0; j < worms_pile[i]; indice_minhoca++, j++) {
            pair<int, int> worm;
            worm.first = indice_minhoca;
            worm.second = i + 1;
            all_worms_sorted.pb(worm);
        }
    }

    sort(all(all_worms_sorted));
    vector<int> ws;
    vector<int> wsi;
    forn(i, all_worms_sorted.size()) {
        ws.pb(all_worms_sorted[i].first);
        wsi.pb(all_worms_sorted[i].second);
    }

    // forn(i, ws.size())
    //     cout << "Vetor de minhocas: " << ws[i] << ", pilha: " << wsi[i] << endl;


    forn(i, m) {
        auto pos = lower_bound(all(ws), labels[i]);
        int dist = distance(ws.begin(), pos);
        cout << wsi[dist] << endl;
    }        
    
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