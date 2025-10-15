#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, j, k, l , c; cin >> n;
    vector<int> a(n);
    vector<int> indices(4);
    forn(i, n){
        cin >> a[i];
        if (i == 0){
            l = a[i];
            k = a[i];
            j = a[i];
            c = a[i];
            indices[0] = i;
            indices[3] = i;
        }
        if (a[i] > l){
            l = a[i];
            indices[3] = i;
        }
        if (a[i] < c){
            c = a[i];
            indices[0] = i;
        }   
    }
    forn(i, n){
    if (a[i] >= j && indices[3] != i){
        l = a[i];
    }
    if (a[i] <= k && indices[0] != i){
        c = a[i];
    }   
}

    cout << l << " " << j << " " << k << " " << c << endl;
    cout << abs(c - j) + abs(j - k) + abs(k - l) + abs(l - c) << endl;
}

int32_t main(){
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}