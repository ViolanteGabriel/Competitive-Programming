#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < (n); i++)
#define for_each(i, container) for(auto& i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n;
    cin >> n;

    vector<int> a(2*n); 
    forn(i, 2*n)
        cin >> a[i];



    unordered_map<int, int> nocorrencias;
    forn(i, 2*n)
        nocorrencias[a[i]]++;

    int cnt_par = 0, cnt_impar = 0;
    for_each(elemento, nocorrencias) {
        if (elemento.second % 2 == 0) cnt_par++;
        else cnt_impar++;
    }

    // Se cnt_par for par entao a resposta eh
    if (cnt_par % 2 == 0)
        cout << cnt_impar + cnt_par * 2 << endl;
    else if (cnt_par % 2 != 0 and cnt_impar >= 2) {
        cout << cnt_impar + cnt_par * 2  << endl;
    }
    else {
        cout << cnt_impar + cnt_par * 2 - 2 << endl;
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



