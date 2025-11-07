

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

    set<int> multiplos;

    int p = 10;
    int i = p + 1;
    while (i <= n)
    {
        if (n % i == 0) {
            multiplos.insert(n/i);
        }
        p *= 10;
        i = p + 1;
    }
    
    cout << multiplos.size() << endl;

    for_each(multiplo, multiplos)
    {
        cout << multiplo << " ";
    }
    if (multiplos.size() > 0) cout << endl;
    
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}