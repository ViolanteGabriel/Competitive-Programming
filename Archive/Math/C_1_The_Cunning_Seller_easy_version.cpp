

#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

long long power(long long base, long long exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res *= base;
        base *= base;
        exp /= 2;
    }
    return res;
}

void solve() {
    int n;
    cin >> n;

    int custo_total = 0;
    int x = 0; 

    while (n > 0) {
        int digito = n % 3;

        if (digito > 0) {
            long long p_x = power(3, x);
            long long p_x_mais_1 = p_x * 3;
            long long p_x_menos_1 = (x == 0) ? 0 : p_x / 3; 

            long long custo_acordo_x = p_x_mais_1;
            if (x > 0) {
                custo_acordo_x += x * p_x_menos_1;
            }

            custo_total += digito * custo_acordo_x;
        }

        n /= 3;
        x++;
    }

    cout << custo_total << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}