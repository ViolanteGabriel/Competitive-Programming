#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, ans = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n - 2; i++){
        if (s[i] == 'm' and s[i + 1] == 'a' and s[i + 2] == 'p'){
            ans++;
            i+=2;
        }
        else if (s[i] == 'p' and s[i + 1] == 'i' and s[i + 2] == 'e'){
            ans++;
            i+=2;
        }
        else
            continue;
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