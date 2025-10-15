#include <bits/stdc++.h>
using namespace std;
const int MAX = 200'007;
int sumOfAllNumbers[MAX];

int main(int argc, char const *argv[]){
    int nTests, number, aux, digitsSum = 0;
    cin >> nTests;
    for (int j = 1; j < MAX; j++)
    {
        aux = j;
        do
        {
            digitsSum = (aux % 10) + digitsSum;
            aux = aux / 10;
        } while (aux / 10 != 0 || aux % 10 != 0);
        if (digitsSum == 0) digitsSum = 1;
        if (j >= 2) sumOfAllNumbers[j - 1] = digitsSum + sumOfAllNumbers[j - 2];
        else sumOfAllNumbers[j - 1] = digitsSum;
        digitsSum = 0;
    }

    for (int i = 0; i < nTests; i++)
    {
        cin >> number;
        cout << sumOfAllNumbers[number - 1] << endl;
    }
    return 0;
}