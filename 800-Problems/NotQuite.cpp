#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    vector<string> l(3);
    int ans = 198;
    forn(i, 3)
        cin >> l[i];
    
    forn(i, 3){
        ans = 198;
        forn(j, 3){
            if (l[i][j] != '?')
                ans -= l[i][j];
            if (j == 2 and ans != 0){
                char answer = ans;
                cout << answer << endl;
                return;
            }
        }
    }
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}