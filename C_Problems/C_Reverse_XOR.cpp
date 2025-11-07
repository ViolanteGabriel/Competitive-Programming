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

    bitset<64> numero(n);

    int cnt = 0;
    int msb = -1;
    for (int i = numero.size()-1; i >= 0; i--)
    {
        if (numero[i] == 1){
            msb=i;
            break;
        }
    }

    if (msb == -1) {cout << "YES" << endl; return;}

    for (int i = 0, j = msb; j < numero.size(); )
    {
        if (numero[i] != numero[j]) {
            msb++;
            j = msb;
            i = 0;
            continue;
        }
        else if (i == j){
            if (numero[i] == 0) {
                cout << "YES" << endl;
                return;
            }
            cout << "NO" << endl;
            return;
        }
        else if (i == j-1 or j == i + 1) {
            cout << "YES" << endl;
            return;
        }
        else {
            i++;
            j--;
        }
    }
    cout << "NO" << endl;
    
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}