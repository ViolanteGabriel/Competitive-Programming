#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(int argc, char const *argv[])
{
    int nTests, nLamps;
    string configurationS;
    cin >> nTests;
    for (int z = 0; z < nTests; z++)
    {
        cin >> nLamps >> configurationS;
        int number_of_ones = count(configurationS.begin(), configurationS.end(), '1');
        int number_of_adj = 0;

        if (number_of_ones % 2 != 0) cout << "NO" << endl;  // Se for Impar Printa NAO

        for (int i = 0; i < nLamps; i++)
        {
            if (configurationS[i] == '1' and configurationS[i] == configurationS[i + 1]) number_of_adj++;
        }

        if (number_of_adj == 1 and number_of_ones == 2) cout << "NO" << endl; // Se tiver um 11 junto imprime NAO
        else if (number_of_ones % 2 == 0) cout << "YES" << endl;              // Se for par imprime SIM
    }
    return 0;
}
