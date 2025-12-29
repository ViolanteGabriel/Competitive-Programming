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

    vector<int> dp(n-1);
    int current_sum = 0;
    forn(i, n-1) {
        current_sum += fabs(a[i] - a[i+1]);
        dp[i] = fabs(a[i] - a[i+1]);
    }

    int temp_sum = current_sum;
    int min_sum = current_sum;

    for (int i = 1; i < n-1; i++)
    {
        temp_sum = current_sum - dp[i] - dp[i-1];
        temp_sum = temp_sum + fabs(a[i-1] - a[i+1]);
        if (temp_sum < min_sum)
            min_sum = temp_sum;
    }

    temp_sum = current_sum - dp[0];
    if (temp_sum < min_sum) min_sum = temp_sum;

    temp_sum = current_sum - dp[n-2];
    if (temp_sum < min_sum) min_sum = temp_sum;
    
    cout << min_sum << endl;
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