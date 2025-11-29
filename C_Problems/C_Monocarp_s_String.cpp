#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n;
    string s;

    cin >> n >> s;
    int as = 0, bs = 0;
    forn(i, n) {
        if (s[i] == 'a') as++;
        else bs++;
    }
    /*DICA: Transforme a string em um array 1 e -1, entao, note que quere
    mos remover um subsegmento de soma x. sendo x o valor atual da soma total,
    do vetor.*/

    vector<int> vec(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a') vec[i] = 1;
        else vec[i] = -1;
        sum += vec[i];
    }
    // Reduzimos o problema ao seguinte, queremos encontrar, em um array de 1 e -1
    // o menor segmento de soma s;

    
    



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



