#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define endl '\n'
#define ll long long
using namespace std;

void solve()
{
    int n, k, minOperations = 0, twoCounter = 0; cin >> n >> k;
    int aux = 0;
    vector<int> a(n);

    forn(i, n)
        cin >> a[i];
    
    forn(i, n)
    {
        if (k == 4)
        {
            if (a[i] % 2 == 0) twoCounter++;
            if (a[i] % 4 == 0 || twoCounter == 2)
            {
                cout << 0 << endl;
                return;
            }
            else
            {
                aux = 0;
                while(a[i] % 2 != 0)
                {
                    a[i]++;
                    aux++;
                }
                if (i == 0) minOperations = aux + 1;
                if (a[i] % 2 == 0 && a[i] % 4 == 0) minOperations = aux;
                if (aux < minOperations) minOperations = aux + 1;
            }

        }
        else
        {
            if (a[i] % k == 0)
            {
                cout << 0 << endl;
                return;
            }
            else
            {
                aux = 0;
                while(a[i] % k != 0)
                {
                    a[i]++;
                    aux++;
                }
                if (i == 0) minOperations = aux;
                if (aux < minOperations) minOperations = aux;
            }
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