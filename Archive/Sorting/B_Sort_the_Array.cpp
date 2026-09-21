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

    bool segmento_descrescente = false;
    int cnt = 0;
    pair<int, int> indice = {1, 1};
    for (int i = 0; i < n-1; i++)
    {
        if (cnt >= 2 and a[i] > a[i + 1]) {
            cout << "no" << endl;
            return;
        }

        // Comecamos um segmento decrescente
        if (a[i] > a[i+1] and segmento_descrescente == false) {
            segmento_descrescente = true;
            cnt++;
            indice.first = i + 1;
        }
        else if (segmento_descrescente == true and a[i] <= a[i+1]) {
            indice.second = i + 1;
            segmento_descrescente = false;
            cnt++;
        }

        if (i == n - 2 and segmento_descrescente == true) {
            indice.second = i + 2;
        }
    }

    sort(a.begin() + (indice.first - 1), a.begin() + indice.second);

    // forn(i, n)
    // cout << a[i] << " ";
    // cout << endl;

    for (int i = 0; i < n-1; i++)
    {
        if (a[i] > a[i+1]) {
            cout << "no" << endl;
            return;
        }
    }

    cout << "yes" << endl;
    cout << indice.first << " " << indice.second << endl;
}

int32_t main(){
    solve();
    return 0;
}



