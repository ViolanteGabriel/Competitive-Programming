#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < int(n); i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n, m, price_a, price_b;
    cin >> n >> m >> price_a >> price_b;
    
    int custo_1 = n * price_a;
    int custo_2 = (n / m) * price_b + (n % m) * price_a;
    int custo_3;
    if (n % m == 0) custo_3 = custo_2;
    else custo_3 = (n / m + 1) * price_b;
    cout << min({custo_1, custo_2, custo_3}) << endl;
}
int32_t main(){
    solve();
    return 0;
}



