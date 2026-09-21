/*
    Author: Gabriel Violante
    CF Handle: SUPER_ZOIAO
    Federal University of Minas Gerais (UFMG)
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

    int Nzeros = 0;

    vector<int> a(n);
    forn(i, n) {
        cin >> a[i];
        if (a[i] == 0) Nzeros++;
    }
    // MEX(A) + MEX(B) + MEX(C) >= 2*(max(MEX(A), MEX(B), MEX(C)))
    
    // If the number of zeros is equal to 0, than YES, because 0 + 0 + 0 = 2*0
    // If the number of zeros is equal to 1, than NO, because 0 + 0 + Z != 2*Z
    // If the Nzeros >= 2 than YES (why?);

    // OK
    if (Nzeros == 1) {
        cout << "NO" << endl;
        return;
    }

    char c = 'A';
    char A = 'A';
    char B = 'B';
    char C = 'C';

    cout << "YES" << endl;

    // OK
    if (Nzeros == 0) {
        forn(i, n)
            cout << A;
        cout << endl;
        return;
    }

    
    forn(i, n) {
        if (a[i] == 0) {
            if (c == 'C') c = 'A';
            cout << c;
            c++;
            continue;
        }
        cout << C;
    }
    cout << endl;
    
}

// Main
int32_t main() {
    fast_io();
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}