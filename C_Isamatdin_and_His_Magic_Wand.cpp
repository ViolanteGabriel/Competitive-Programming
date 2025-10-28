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

    vector<int> brinquedos(n);
    forn(i, n)
        cin >> brinquedos[i];
    
    bool tempar = false;
    bool temimpar = false;

    for (int i = 0; i < n; i++)
    {
        if (brinquedos[i] % 2 == 0)
            tempar = true;
        else
            temimpar = true;
    }

    if (tempar == true and temimpar == true){
        sort(brinquedos.begin(), brinquedos.end());
        forn(i, n)
            cout << brinquedos[i] << " ";
        cout << endl;
    }
    else {
        forn(i, n)
            cout << brinquedos[i] << " ";
        cout << endl;
    }
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