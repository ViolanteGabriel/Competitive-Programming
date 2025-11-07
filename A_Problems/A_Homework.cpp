

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
    string a;
    cin >> a;
    int m;
    cin >> m;
    string b, c;
    cin >> b >> c;

    for (int i = 0; i < m; i++)
    {
        if (c[i] == 'V') {
            a.insert(0, 1, b[i]);
        }
        else {
            // insere final
            a.push_back(b[i]);
        }
    }
    cout << a << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}