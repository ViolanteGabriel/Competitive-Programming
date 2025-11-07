#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void fatorar(int number, vector<int>& divisores) {
    if (number == 0 or number == 1) return;

    for (int i = 1; i*i <= number; i++)
    {
        if (number % i == 0) {
            divisores[i]++;
            divisores[number/i]++;
        }
    }
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    unordered_set<int> divisores;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {        
        int fatorendo = a[i];

        for (int j = 1; j*j <= fatorendo; j++)
        {
            if (fatorendo % j == 0) {
                // cout << "O numero " << fatorendo << " eh divisivel por " << j << endl;

                if (divisores.count(j) != 0 or divisores.count(fatorendo/j) != 0) { // if that divisor is already there, we can assume that now, two numbers have a divisor in common, thus, it has a GDC between these
                    cout << 0 << endl;
                    return;
                }

                if (j != 1){
                    if (fatorendo/j != j) 
                        divisores.insert(j);
                    
                    divisores.insert(fatorendo/j);
                }
                else if (fatorendo/j != 1) 
                    divisores.insert(fatorendo/j);
            }
        }
    }

    
    for (int i = 0, menor_custo = INT_MAX;; i < n; i++)
    {        
        int fatorendo = a[i] + 1;
        int custo = b[i];

        for (int j = 1; j*j <= fatorendo; j++)
        {
            if (fatorendo % j == 0) {

                if (divisores.count(j) != 0 or divisores.count(fatorendo/j) != 0) { // if that divisor is already there, we can assume that now, two numbers have a divisor in common, thus, it has a GDC between these
                    if (custo < menor_custo)
                        menor_custo = custo;
            
                    return;
                }
            }
        }
    }
    cout << 2 << endl;
    return;

    // This problem can be divided in trhee parts.

    // Part 2: ans = 1
    /*
        Agora, basta iterar pelo array novamente, somando 1 em cada uma das posições e checando se o novo numero +1 terá
        algum divisor no array de divisores. Se ele tiver, printe 1 e acabou, se chegarmos ao final da iteração,
        printe 2 e acabou. So que agora, vamos computar o menor custo possível de inserção.

    */
    
    // Part 2: ans = 2
    /*
        Agora basta computar para 
    */

    // Part 3: ans = 0
    /*
        This will happen when whe have at least two numbers with a GCD != 1;
        We can compute this by storaging all the divisors of all elements in a, for this, we'll have to
        fatorar all n numbers of A. When computing the divisors, if that divisor is already in the vector, boom, we have two elements with the same divisor.
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