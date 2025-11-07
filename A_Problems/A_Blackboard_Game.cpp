#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;

    if (n % 4 == 0)
        cout << "bob" << endl;
    else
        cout << "alice" << endl;

    return;
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}