#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < (n); i++)
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

    // Queremos contar o total de elementos onde aj - ai = j - i.
    // Observe que a solucao quadratica nao passa.

    // aj - j = ai - i
    // forn(i, n)
    //     cout << i << " ";
    // cout << endl;
    // forn(i, n)
    //     cout << a[i] << " ";
    // cout << endl;

    forn(i, n)
        a[i] -= i;
    
    unordered_map<int, int> frec;
    forn(i, n)
        frec[a[i]]++;

    // 2 termos iguais -> incrimenta 1 (apenas 1 i e j)
    // 3 termos iguais -> incrementa 2 + 1
    // 4 termos iguais -> incrementa 3 + 2 + 1
    // 5 termos iguais -> incrementa 4 + 3 + 2 + 1
    // x termos iguais -> icrementa (x - 1) + (x - 2) + (x - 3) ... (x - x + 1) = somatório_de(1 até x - 1)

    int ans = 0;
    for_each(frequencia, frec) {
        ans += ((frequencia.second - 1) * (frequencia.second)) / 2;
    }
    cout << ans << endl;

    // REESCREVER AS FORMULAS!!!!!!
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}



