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

    unordered_map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }
    
    int l = 0, r = 0, ans = 0;
    while (l < n)
    {
        unordered_map<int, int> c;
        int aux = 0;

        for (int i = l; i <= r; i++)
        {
            c[a[i]++];
        }

        int falhou = false;
        for_each(ci, c) {
            if (ci.second <= cnt[ci.first]/k) {
                continue;
            }
            else {
                falhou = true;
                break;
            }
        }
        if (falhou) {
            l++;
        }
        else if (r != n - 1) {
            r++;
            ans += r - l;
        }

    }
    
    

}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}