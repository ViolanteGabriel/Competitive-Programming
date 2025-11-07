#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, k, x;
    cin >> n >> k >> x;

    int max_dist = INT_MIN;
    vector<int> a(n);
    forn(i, n) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    pair<int, int> par;

    for (int i = 0; i < n-1; i++)
    {
        if (a[i+1] - a[i] > max_dist) {
            max_dist = a[i+1] - a[i];
            par.first = a[i+1];
            par.second = a[i];
        }
    }
    
    for (int i = 0; i < k; i++)
    {
        if (i == par.first or par.second) {
            cout << par.first / par.second << " ";
        }
        else {
            cout << i << " ";
        }
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