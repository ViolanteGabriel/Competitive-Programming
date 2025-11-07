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

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        a.push_back(aux);
    }
    
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= a[k-1] and a[i] > 0)
            cnt++;
    }
    cout << cnt << endl;
    

    return;
}

int32_t main(){
    solve();
    return 0;
}