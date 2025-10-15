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

    int ans = 0;
    int grupo_A = n;
    int grupo_B = 0;

    while (true) {
        // Executamos as partidas;
        int perdedores_grupoA = grupo_A/2;
        int perdedores_grupoB = grupo_B/2;

        grupo_A = grupo_A/2 + grupo_A%2;
        grupo_B = grupo_B/2 + grupo_B%2;

        // Atualizamos adicionamos em B os perdedores
        if (perdedores_grupoA == 0 and perdedores_grupoB == 0) {
            break;
        }
        else {
            grupo_B += perdedores_grupoA;
            ans += perdedores_grupoA + perdedores_grupoB;
        }
    }

    cout << ++ans << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}