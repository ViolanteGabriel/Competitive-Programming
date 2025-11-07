#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[k] and a[i] > 0)
            cnt++;
    }
    cout << cnt << endl;
    

    return;
}

int32_t main(){
    solve();
    return 0;
}