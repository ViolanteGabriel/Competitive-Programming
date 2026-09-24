/*
    Author: Gabriel Violante
    CF Handle: SUPER_ZOIAO
    Federal University of Minas Gerais (UFMG)
*/

#include <bits/stdc++.h>

using namespace std;

// Definitions and Macros

#define int long long 
#define printv(v) { for(auto& _xL : (v)) cout << _xL; cout << endl; } // Change the " " to eliminate/add spaces
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define forn(i, n) for (int i = 0; i < n; i++)
#define endl '\n'

// Useful Constants
int INF = 0x3f3f3f3f;
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    forn(i,n)
        cin >> a[i];


    int acc = 0;
    priority_queue<int> pq;
    for (int i = 0; i < m-1; i++){
        acc += a[i];
        pq.push(a[i]);
    }

    int total_score = m * a[m-1] - acc;
    for (int i = m-1; i < n; i++)
    {
        int pontuacao_atual = m * a[i] - acc;
        total_score = (pontuacao_atual > total_score) ? pontuacao_atual : total_score;
        if (!pq.empty() and a[i] < pq.top()) {
            acc -= pq.top();
            pq.pop();
            pq.push(a[i]);
            acc += a[i];
        }
    }
    cout << total_score;
}

// Main
int32_t main() {
    fast_io();
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
        cout << endl;
    }
    
    return 0;
}