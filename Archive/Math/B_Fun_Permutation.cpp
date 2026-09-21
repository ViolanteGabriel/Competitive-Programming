#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    // SACADA MATEMATICA!!!!!!!!

    int n;
    cin >> n;

    vector<int> p;
    forn(i, n) {
        int aux;
        cin >> aux;
        p.push_back(aux);
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        // Temos que pensar como uma função matemática
        ans[i] = n + 1 - p[i];
        cout<< ans[i] << " ";
    }
    cout << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}