#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int pi, pj, ans, aux;
    forn(i, 5){
        forn(j, 5){
            cin >> aux;
            if(aux == 1){
                pi = i;
                pj = j;
            }
    }
    }
    ans = abs(pi - 2) + abs(pj - 2);
    cout << ans << endl;
    
}

int32_t main(){
    solve();
    return 0;
}