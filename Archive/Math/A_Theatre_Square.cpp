#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, m, a;
    cin >> n >> m >> a;

    int blocos_verticais = (n / a) + (n % a != 0);
    int blocos_horizontais = (m / a) + (m % a != 0);

    cout << blocos_verticais * blocos_horizontais << endl;

    return;
}

int32_t main(){
    solve();
    return 0;
}