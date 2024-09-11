#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, aux;  cin >> n;
    double sum = 0;
    vector<int> a(n);
    forn(i, n){
        cin >> a[i];
        sum += a[i];
    }
    if (static_cast<int>(sqrt(sum)) * sqrt(sum) == static_cast<int>(sum))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}