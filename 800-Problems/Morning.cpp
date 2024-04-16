#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define endl '\n'
#define ll long long
#define MODULE 1000000007
using namespace std;

void solve()
{
    int nSeconds = 0, position = 1;
    string pin;
    cin >> pin;
    
    forn(i, 4)
    {
        if (position == (pin[i] - 48))
            nSeconds++;
        else
        {
            if (pin[i] == 48)
                nSeconds += (10 - position) + 1;
            else if (pin[i] - 48 > position)
                nSeconds += (pin[i] - 48) - position + 1;
            else if(pin[i] - 48 < position)
                nSeconds += position - (pin[i] - 48) + 1;
            
            if (pin[i] != 48) position = (pin[i] - 48);
            else position = 10;
        }
    }
    cout << nSeconds << endl;
}

int main()
{
    int nTests; cin >> nTests;
    for (int i = 0; i < nTests; i++) solve();
    return 0;
}