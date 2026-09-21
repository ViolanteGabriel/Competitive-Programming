#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int a, b, m = 0; cin >> a >> b;
    if (a % b == 0)
        m = 0;
    else
        m = b - a%b;
    cout << m << endl;
}

int32_t main(){
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}