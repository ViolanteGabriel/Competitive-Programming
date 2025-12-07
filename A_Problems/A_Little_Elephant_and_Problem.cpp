#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < (n); i++)
#define forch(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> a;
    forn(i, n){
        int aux;
        cin >> aux;
        a.push_back(aux);
    }
    
    // Nota que, queremos descobrir se, alterando duas posições quaisqueres do vetor, é possível ordená-lo
    // em ordem decrescente.

    // Observe, que quando temos uma quebra, ou seja ai + 1 < ai, algo tem que ser feito. Mas note que
    // nao necessariamente temos que trocar esses dois elementos.

    // Podemos apenas ordenar o vetor e verificar se ele tem ate 2 numeros diferentes na posicao original
    // se tiver mais que dois, precisamos necessariamente que mover mais de um elemento.
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    int diffs = 0;
    forn(i, n) {
        if (sorted_a[i] != a[i])
            diffs++;
    }
    
    if (diffs > 2)
        cout << "NO";
    else 
        cout << "YES";
    cout << endl;
    return;
}


int32_t main(){
    solve();
    return 0;
}



