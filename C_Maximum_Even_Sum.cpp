#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

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

void solve(){
    int a, b;
    cin >> a >> b;

    unordered_set<int> divisores_B = divisores(b);

    int ans = -1;
    int k = -1;
    for_each(divisor, divisores_B) {
        int soma = a * divisor + b/divisor; 
        if (soma > ans and soma % 2 == 0)
            {ans = a * divisor + b/divisor; k = divisor;}
    }
    cout << "A = " << a << " B = " << b << " Optimal K: " << k << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}




