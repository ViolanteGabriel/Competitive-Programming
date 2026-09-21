#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    for (int i = 1, j = n; i <= j; i++, j--){
        if (i == j) cout << j;
        else cout << j << " " << i << " ";
    }
    cout << endl;
}

int32_t main(){
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}