#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    for (int i = 2; i*i < n; i++){
        if (n % i == 0){
            cout << "nao" << endl;
            return;
        }
    }
    cout << "sim" << endl;
    return;
}

int32_t main(){
    solve();
}