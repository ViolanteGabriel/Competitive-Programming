#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < int(n); i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    // Queremos cortar a fita no numero maximo de pedacoes possivel, contudo, todos
    // os pedacoes devem ter tamanhos a, b ou c.

    // xa + yb + zc = n;
    // z = (n - yb - ax)/c
    // X pedaços de tamanho A
    // Y pedacos de tamanho B
    // Z pedacos de tamanho C

    // note que queremos maximizar (X + Y + Z) = max|x + y + z| = n

    int ans = 0;
    for (int x = 0; x <= 4000; x++)
    { 
        for (int y = 0; y <= 4000; y++)
        {
            int z = (n - y*b - a*x) / c;    
            
            if (x + y + z > ans and x + y + z <= n and x*a + y*b + z*c == n and x >= 0 and y >= 0 and z >= 0)
                ans = x + y + z;
        }
    }
    cout << ans << endl;
    
    


}

int32_t main(){
    solve();
    return 0;
}



