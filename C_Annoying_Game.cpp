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



