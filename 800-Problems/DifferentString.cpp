#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    string s; cin >> s;
    char aux;
    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] != s[i + 1]){
            cout << "yes" << endl;
            aux = s[i];
            s[i] = s[i + 1];
            s[i + 1] = aux;
            cout << s << endl;
            return;
        }
    }
    cout << "no" << endl;
}

int32_t main(){
    int nTestes;
    cin >> nTestes;
    while(nTestes--)
        solve();
    return 0;
}