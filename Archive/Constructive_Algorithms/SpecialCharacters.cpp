#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solution(int numberOfSpecialCharacters)
{
    if (numberOfSpecialCharacters % 2 == 0)
    {
        cout << "YES" << endl;
        for (int i = 0, switcher = 0; i < numberOfSpecialCharacters; i++, switcher++)
        {
            if (switcher <= 1) cout << "A";
            if (switcher > 1) cout << "B";
            if (switcher == 3) switcher = -1;
        }
        cout << endl;
    }
    else cout << "NO" << endl;
}

int main(int argc, char const *argv[])
{
    int nTests, numberOfSpecialCharacters;
    cin >> nTests;
    for (int i = 0; i < nTests; i++)
    {
        cin >> numberOfSpecialCharacters;
        solution(numberOfSpecialCharacters);
    }
    return 0;
}
