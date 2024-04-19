#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define endl '\n'
#define ll long long
#define MODULE 1000000007
using namespace std;

int main()
{
    int nStatements, x = 0; cin >> nStatements;
    string statement;

    forn(i, nStatements)
    {
        cin >> statement;
        for (int j = 0; j < statement.size(); j++)
        {
            if (statement[j] == '+')
            {
                x++;
                break;
            }
            else if (statement[j] == '-')
            {
                x--;
                break;
            }
        }
    }

    cout << x << endl;

    return 0;
}