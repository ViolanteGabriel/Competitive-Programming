#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 == c2) {
            continue;
        }
        else if (c1 > c2){
            cout << 1 << endl;
            return;
        } else if (c1 < c2){
            cout << -1 << endl;
            return;
        }
    }
    cout << 0 << endl;
    
}

int32_t main(){
    solve();
    return 0;
}