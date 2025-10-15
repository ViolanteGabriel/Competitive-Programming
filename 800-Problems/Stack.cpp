#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int nTests, a, b, c;
    cin >> nTests;
    for (int i = 0; i < nTests; i++)
    {
        cin >> a >> b >> c;
        if (a < b && b < c) cout << "STAIR" << endl;
        else if(b > a && b > c) cout << "PEAK" << endl;
        else cout << "NONE" << endl;
    }
    return 0;
}
