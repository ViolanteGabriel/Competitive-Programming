#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int sideN, sideH, sideW, possibleWays;
    cin >> sideN >> sideH >> sideW;
    possibleWays = (sideN - sideH + 1) * (sideN - sideW + 1);
    cout << possibleWays << endl;
    return 0;
}
