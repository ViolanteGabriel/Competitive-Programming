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

    vector<int> quocientes; // O RESULTADO DA DIVISAO;
    vector<int> restos; // OS RESTOS DA DIVISAO;

    forn(i, n) {
        int aux;
        cin >> aux;
        quocientes.push_back(aux);
    }

    forn(i, n) {
        int aux;
        cin >> aux;
        restos.push_back(aux);
    }

    sort(quocientes.rbegin(), quocientes.rend());
    sort(restos.begin(), restos.end());
    
    // cout << "checkpoint";
    // O que queremos encontrar a partir dos vetores fornecidos e o número máximo de operações
    // que conseguimos executar.

    // OPERACAO:
    //  1. Escolha dois inteiros x e y, tal que sejam menores ou igual a k.
    //  2. O quociente e o resto dessa divisao, devem estar presentes em q e r respectivamente.
    //  3. Delete qi e rj;
    
    // Note que para obter x e y, devemos intuitivamente olhar para os vetores resto e quociente e K.



    // O resto (r[j]) é sempre menor do que o divisor (y);
    // Podemos determinar o menor divisor com base no resto.

    int ans = 0;
    int i = 0;
    int j = 0;
    while (i < n and j < n)
    {
        int resto = restos[i];
        int quociente = quocientes[j];
        
        if (((resto + 1) * quociente) + resto > k) {
            j++;
        }
        else {
            i++;
            j++;
            ans++;
        }
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



