#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n, x;
    cin >> n;

    vector<int> a(n);
    forn(i, n)
        cin >> a[i];
    cin >> x;
    sort(a.begin(), a.end());
    if (x <= a[n-1] and x >= a[0])
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;
    
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}



