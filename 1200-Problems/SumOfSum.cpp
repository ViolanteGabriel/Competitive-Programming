#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int nTests, maxNumber, aux, sum = 0, digitsSum = 0;
    cin >> nTests;
    for (int i = 0; i < nTests; i++)
    {
        cin >> maxNumber;
        for (int j = 1; j <= maxNumber; j++)
        {
            aux = j;
            do
            {
                digitsSum = (aux % 10) + digitsSum;
                aux = aux / 10;

            } while (aux / 10 != 0);
            if (digitsSum == 0) digitsSum = 1;
            sum = sum + digitsSum;
            digitsSum = 0;
            cout << "The sum with " << j << "with the previus positions is equal to: " << sum << endl;
        }
        cout << sum << endl;
        sum = 0;
    }
    



}