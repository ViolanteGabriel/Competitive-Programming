#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b)
        cout << c << endl;
    else if(a == c)
        cout << b << endl;
    else
        cout << a << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}