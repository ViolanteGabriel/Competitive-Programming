#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < (n); i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    forn(i, n) 
        cin >> a[i];
    forn(i, n)
        cin >> b[i];

    // O Bob consegue anular TODAS as jogadas da alice, permanecendo a soma igual.
    
    // Se k for par:
        // O problema se resume em encontrar a soma maxima no vetor;

    if (k % 2 == 0) {
        int i = 0, j = 0, max_sum = 0, sum = 0;

        // Tratamento apra vetores que nao contem positivos, nesse caso, so retornar o maior.
        bool positivo = false;
        forn(i, n)
            if (a[i] > 0) positivo = true;
        if (positivo == false) {
            int maior = *max_element(a.begin(), a.end());
            cout << maior << endl;
            return;
        }

        while (sum >= 0 and j < n) {
            sum += a[j];
            j++;
            if (sum > max_sum) max_sum = sum;
            if (sum < 0) {i = j; sum = 0;}
        }
        cout << max_sum << endl;
        return;
    }
    else {
        int i = 0, j = 0, max_sum = 0, sum = 0;

        // Tratamento apra vetores que nao contem positivos, nesse caso, so retornar o maior.
        bool positivo = false;
        forn(i, n)
            if (a[i] + b[i] > 0) positivo = true;
        if (positivo == false) {
            forn(i, n) a[i] += b[i];
            max_sum = *max_element(a.begin(), a.end());

            cout << max_sum << endl;
            return;
        }

        while (sum >= 0 and j < n) {
            sum += a[j] + b[j];
            j++;
            if (sum > max_sum) max_sum = sum;
            if (sum < 0) {i = j; sum = 0;}
        }
        cout << max_sum << endl;
        return;
    }
    
    // Se k for impar:
        // Ela quer escolher o a[i] que maximize a soma maxima, mas como ela escolhe isso?
        // nao eh o maior valor bi
        // nao eh o maior valor da soma de ai com bi
        // nao eh o maior valor de bi que pertence ao subsegmento atual
        
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}



