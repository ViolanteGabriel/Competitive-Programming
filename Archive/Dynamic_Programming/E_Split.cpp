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
    unordered_map<int, int> frec_total;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        frec_total[a[i]]++;
    }

    // Todos os números devem ter uma frequência multipla de k e maior do que k;
    // Cada subset deve ter no máximo frequencia_total/k, para cada simbolo distinto;
    // Basta percorrer o vetor agora e determinar o subset -> como fazer isso?
    // Minha soluçao: O(n^2) -> O(n);
    
    for_each(frec, frec_total) {
        if (frec.second % k != 0) {
            cout << 0 << endl;
            return;
        }
    }

    int ans = 0;
    unordered_map<int, int> frec_atual;
    frec_atual[a[0]]++;
    for (int l = 0, r = 0; r >= l and r < n;) {

        if ((frec_atual[a[r]] > frec_total[a[r]]/k)) {
            frec_atual[a[l]]--;
            l++;
        }   
        else {
            ans += r - l + 1; // Essa é a parte difícil do problema;
            r++;
            frec_atual[a[r]]++;
        }
    }
    
    cout << ans << endl;



    /*
        1 -> 1
        2 -> 3
        3 -> 5
        4 -> 10
    
    
    */
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}