#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_in_range(i, range) for(auto i : range)
#define endl '\n'
#define ll long long
using namespace std;


void solve()
{
    ll tamanho, K; cin >> tamanho >> K;
    set<ll> sequencia;
    ll aux; 
    ll sum = 0;

    forn(i, tamanho)
    {
        cin >> aux;
        sequencia.insert(aux);
    }

    sum = ((1 + K) * K) / 2;

    for(auto numero : sequencia)
    {
        if (numero <= K)
            sum = sum - numero;
    }
    cout << sum;
}

int main()
{
    solve();
    return 0;
}