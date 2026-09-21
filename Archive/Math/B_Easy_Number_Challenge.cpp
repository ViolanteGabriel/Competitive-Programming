#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < (n); i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

// Retorna um set com os divisores de um numero;
int number_divs(int number) {
    unordered_set<int> divisores;
    int ans = 0;
    if (number == 0) return 0;
    if (number == 1) return 1;
    

    for (int i = 1; i*i <= number; i++)
        if (number % i == 0) {
            if (divisores.count(number/i) == 0) ans++;
            divisores.insert(number/i);
            if (divisores.count(i) == 0) ans++;
            divisores.insert(i); 
        }
    
    return ans;
}

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    int num_max = a*b*c;
    vector<int> divisores(num_max+1, -1);
    
    int ans = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++){
                if (divisores[i*j*k] == -1) 
                    divisores[i*j*k] = number_divs(i*j*k);
                
                // cout << "Divisores de " << i*j*k << ": " << divisores[i*j*k] << endl;
                ans+=divisores[i*j*k];
            }
        }   
    }
    cout << ans << endl;
}

int32_t main(){
    solve();
    return 0;
}



