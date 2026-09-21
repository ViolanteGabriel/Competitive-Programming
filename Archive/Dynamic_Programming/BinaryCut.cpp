#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    string s; cin >> s;
    int ans = 1, transition = 1;
    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] == '0' and s[i] != s[i + 1] and transition == 1){
            transition--;
            continue;
        }
        if (s[i] != s[i + 1])
            ans++;
    }
    cout << ans << endl;
    
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}