#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    set<char> aux(s.begin(), s.end());

    string saux(aux.begin(), aux.end());

    map<char, char> m;
    for (int i = 0, j = saux.size() - 1; j >= i; i++, j--){
        m[saux[i]] = saux[j];
        m[saux[j]] = saux[i];
    }

    for (int i = 0; i < n; i++)
        cout << m[s[i]];
    cout << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}