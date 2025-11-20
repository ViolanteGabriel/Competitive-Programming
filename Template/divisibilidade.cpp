#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

// Verifica se um numero eh primo:
bool ehPrimo(int numero) {
    if (numero <= 1) return false;

    for (int i = 1; i*i <= numero; i++)
    {
        if (numero % i == 0 and (i != 1 and i != numero)) return false;
    }
    return true;
}

// Retorna um set com os divisores de um numero;
unordered_set<int> divisores(int number) {
    unordered_set<int> divisores;
    if (number == 0) {
        divisores.insert(0);
        return divisores;
    } 

    for (int i = 1; i*i <= number; i++)
    {
        if (number % i == 0) {
            divisores.insert(i);
            divisores.insert(number/i);
        }
    }
    return divisores;
}
