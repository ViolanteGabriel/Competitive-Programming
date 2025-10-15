#include <bits/stdc++.h>
using namespace std;

int main()
{
    string palavra;
    cin >> palavra;
    for (int i = 1; i < palavra.length() - 1; i++)
    {
        if (palavra[i] != palavra[i + 1] && palavra[i] != palavra[i - 1])
        {
            cout << i + 1;
            break;
        }
        else if (palavra[i - 1] != palavra[i]) {cout << i; break;}
        else if (palavra[i + 1] != palavra[i]) {cout << i + 2; break;}
    }
    
    return 0;
}