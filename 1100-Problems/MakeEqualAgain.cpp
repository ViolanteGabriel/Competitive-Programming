#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void solve()
{
    int arraySize, firstNumber, minumumBurlesNumberfstNumber = 0, aux, scndNumberCounter = 0, minumumBurlesNUmberLastNumber = 0, fstNumberCounter = 0, lastNumber = 0, a = 0, b = 0; cin >> arraySize;
    vector<int> arrayX;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> aux;
        arrayX.push_back(aux);
    }

    firstNumber = arrayX[0];
    lastNumber = arrayX[arraySize - 1];

    for (int i = 1, j = arraySize - 2; i < arraySize; i++, j--)
    {
        if (arrayX[i] != firstNumber) {minumumBurlesNumberfstNumber += 1 + fstNumberCounter; fstNumberCounter = 0; a = 1;}
        else if(a == 1) fstNumberCounter++;

        if (arrayX[j] != lastNumber) {minumumBurlesNUmberLastNumber += 1 + scndNumberCounter; scndNumberCounter = 0; b = 1;}
        else if (b == 1) scndNumberCounter++;
    }
    if (minumumBurlesNumberfstNumber >= minumumBurlesNUmberLastNumber) cout << minumumBurlesNUmberLastNumber << endl;
    else cout << minumumBurlesNumberfstNumber << endl;
}

int main()
{
    int nTests; cin >> nTests;
    for (int i = 0; i < nTests; i++) solve();
    return 0;
}