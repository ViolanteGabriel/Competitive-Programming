#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, f, k, fav;
    cin >> n >> f >> k;
    vector<int> a(n);
    forn(i, n)
        cin >> a[i];
    fav = a[f-1];
    
    sort(a.begin(), a.end(), [](int a, int b){return a > b;});
    if (a[k-1] > fav)
        cout << "no" << endl;
    else if (a[k-1] == fav and a[k] == fav)
        cout << "maybe" << endl;
    else
        cout << "yes" << endl;

}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}