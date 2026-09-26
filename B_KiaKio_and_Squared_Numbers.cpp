/*
    Author: Gabriel Violante
    CF Handle: SUPER_ZOIAO
    Federal University of Minas Gerais (UFMG)
*/

#include <bits/stdc++.h>

using namespace std;

// Definitions and Macros
#define int long long 

#define printv(v) { for(auto& _xL : (v)) cout << _xL; } // Change the " " to eliminate/add spaces
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

int removeZerosRight(int n) {
    while (n % 10 == 0) 
        n /= 10;
    
    return n;
}

// O(numero de digitos de x, que no nosso caso eh 9)
int dqs(int x) {
    int sum = 0;
    while (x/10 > 0) {
        sum += (x % 10) * (x % 10);
        x /= 10;
    }
    sum += (x % 10) * (x % 10);
    return sum;
}

// Problem Solution
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> final(n);

    forn(i,n)
        cin >> a[i];

    final = a;

    forn(i, n) {
        int current_digit = final[i];

        for (int j = 0; j < 10000; j++)
            current_digit = dqs(current_digit);

        final[i] = current_digit;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            ans = (final[i] == final[j]) ? ans + 1 : ans = ans;
    }
    cout << ans << endl;
 }

// Main
int32_t main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}