#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n;
    vector<int> ans;
    string l;
    cin >> n;
    forn(i, n){
        cin >> l;
        forn(j, 4){
            if (l[j] == '#'){
                ans.insert(ans.begin(), j + 1);
            }
        }
    }

    forn(i, n)
        cout << ans[i] << " ";
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}