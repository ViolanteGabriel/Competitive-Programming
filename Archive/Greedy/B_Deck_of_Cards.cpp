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
    string acoes; cin >> acoes;

    vector<char> ans(n);
    forn(i, n)
        ans[i] = '+';

    int l = 0, r = n - 1;
    int l2 = l, r2 = r;

    int restantes = n;

    for_each(acao, acoes) {
            if (acao == '0') {
                ans[l] = '-';
                l++;
                if (l > l2)
                    l2 = l;
                restantes--;
            }
            else if (acao == '1') {
                ans[r] = '-';
                r--;
                if (r < r2)
                    r2 = r;
                restantes--;
            }
    }

    int cnt = 0;
    for_each(acao, acoes) {
        if (acao == '2' and l <= r) {
            ans[l] = '?'; ans[r] = '?';
            l++; r--;
            cnt++;
        }
    }

    int cnt2 = 0;
    forn(i, acoes.size())
        {if (acoes[i] == '2') cnt2++; }

    if (restantes == cnt2) {
        forn(i, n)
            cout << '-';
        cout << endl;
        return;
    }

    forn(i, n)
        cout << ans[i];
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