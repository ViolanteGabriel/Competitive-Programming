#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    forn(i, n)
        cin >> a[i];
    
    int i = 0;
    int j = 0;
    int current_sum = 0;
    int cnt = 0, ans = 0;
    while (i < n)
    {
        for (j = j; current_sum + a[j] <= t and j < n; j++) {
            current_sum+=a[j];
            cnt++;
        }
        if (cnt > ans)
            ans = cnt;
        
        current_sum -= a[i];
        cnt--;
        i++;
    }
    cout << ans << endl;
}

int32_t main(){
    solve();
    return 0;
}



