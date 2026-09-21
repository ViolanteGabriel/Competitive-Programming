#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n;
    cin >> n;

    unordered_map<string, int> sistema;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (sistema.count(s) == 0) {
            sistema[s]++;
            cout << "OK" << endl;
        }
        else{
            cout << s << sistema[s] << endl;
            sistema[s]++;
        }
    }
    
}

int32_t main(){
    solve();
    return 0;
}



