#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define endl '\n'
#define ll long long
using namespace std;

void solve()
{
    int n, k, minOperations = 0; cin >> n >> k;
    int aux = 0;
    vector<int> a(n);

    forn(i, n)
        cin >> a[i];
    
    forn(i, n)
    {
        if (a[i] % 5 == 0)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            aux = 0;
            while(a[i] % 5 != 0)
            {
                a[i]++;
                aux++;
            }
            if (i == 0) minOperations = aux;
            if (aux < minOperations) minOperations = aux;
        }
    }

    cout << minOperations << endl;
}

int main()
{
    int nTests; cin >> nTests;
    forn(i, nTests) solve();
    return 0;
}