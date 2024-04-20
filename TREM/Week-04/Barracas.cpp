#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define endl '\n'
#define ll long long
using namespace std;


void solve()
{
    int introverts, extroverts, universal; cin >> introverts >> extroverts >> universal;
    ll nBarracas;
    int aux = universal;
    for (int i = 1; i <= aux; i++)
    {
        if (extroverts % 3 == 0) break;
        extroverts++;
        universal--;
        if (i == aux &&  extroverts % 3 != 0)
        {
            cout << -1 << endl;
            return;
        }
    }
    
    if (extroverts % 3 != 0)
    {
        cout << -1 << endl;
        return;
    }

    if (universal % 3 == 0)
        nBarracas = introverts + (extroverts / 3) + (universal / 3);
    else 
        nBarracas = introverts + (extroverts / 3) + (universal / 3 + 1);

    cout << nBarracas << endl;

}

int main()
{
    int nTests; cin >> nTests;
    forn(i, nTests)
    {
        solve();
    }
    return 0;
}