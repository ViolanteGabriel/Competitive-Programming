#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    forn(i, n)
        cin >> a[i];

    vector<int> cnt(32, 0);

    for (int i = 0; i < n; i++)
    {
        bitset<32> binario(a[i]);

        for (int j = 0; j < binario.size(); j++) {
            if (binario[j] == 1) cnt[j]++;
        }
    }
    
    bitset<32> k(a[0]);
    int ans = 0;
    for (int j = 0; j < n; j++) {
        int soma = 0;
        bitset<32> k(a[j]);

        for (int i = 0; i < cnt.size(); i++) {
            if (k[i] == 0)
                soma += (cnt[i] * (int)pow(2, i));
            else
                soma += ((n - cnt[i]) * (int)pow(2, i));
        }
        if (soma > ans)
            ans = soma;
    }
    cout << ans << endl;

    return;
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}