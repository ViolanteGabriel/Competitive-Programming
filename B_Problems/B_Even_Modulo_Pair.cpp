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
    int even_cnt = 0;
    pair<int, int> even;
    bool one = false;

    forn(i, n) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            {even_cnt++; even.first = a[i]; even.second = i;}
        if (a[i] == 1)
            one = true;
    }

    if (one) {
        cout << 1 << " " << a[1] << endl;
        return;
    }

    if (even_cnt > 1) {
        // Obrigatoriamente temos uma solucao, pois todo numero par divido por outro par sempre tera resto par
        vector<int> even_numbers;
        forn(i, n) {
            if (a[i] % 2 == 0)
                even_numbers.push_back(a[i]);
        }
        cout << even_numbers[0] << " " << even_numbers[1] << endl;
        return;
    }






    else if (even_cnt == 1) {
        // Testamos todas as solucoes envolvendo esse numero.
        for (int i = 0; i < even.second; i++)
        {
            if (even.first % a[i] == 0) {
                cout << a[i] << " " << even.first << endl;
                return;
            }
        }
        
        for (int i = even.second + 1; i < n; i++)
        {
            if (a[i] % even.first == 0) {
                cout << even.first << " " << a[i] << endl;
                return;
            }
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        if ((a[i + 1] < 2 * a[i]) and (a[i] % 2 != 0 and a[i + 1] % 2 != 0)) {
            cout << a[i] << " " << a[i + 1] << endl;
            return;
        }
    }
    
    cout << -1 << endl;
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



