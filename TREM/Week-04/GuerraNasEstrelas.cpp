#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define endl '\n'
#define ll long long
using namespace std;


void solve()
{
    int a, b; cin >> a >> b;
    int c, d; cin >> c >> d;
    float X, Y;

    if (a == c)
    {
        cout << "NAO SE ENCONTRAM";
        return;
    }

    X = (d - b) / (a - c);
    Y = a * X + b;
    printf("%.2f\n%.2f", X, Y);


}

int main()
{
    solve();
}