#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define endl '\n'
#define ll long long
#define MODULE 1000000007
using namespace std;

void solve()
{
    ll nDigits, product = 1, smaller; cin >> nDigits;
    vector<int> A(nDigits);
    forn(i, nDigits)
    {
        cin >> A[i];
        if (i == 0) smaller = i;
        if (A[i] < A[smaller]) smaller = i;
    }
    A[smaller] += 1;
    forn(i, nDigits)
        product *= A[i];

    cout << product << endl;
}

int main()
{
    int nTests; cin >> nTests;
    forn(i, nTests) solve();
    return 0;
}