#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int lengthA, lengthB, ans = 0, aux = 0; cin >> lengthA >> lengthB;
    string a, b;
    cin >> a >> b;

    forn(i, lengthA){
        for (int j = aux; j < b.size(); j++){
            if(a[i] == b[j]){
                aux = j + 1;
                ans++;
                break;
            }
            if(j == lengthB - 1) {cout << ans << endl; return;}
        }
    }
    cout << ans << endl;
}

int32_t main(){
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}