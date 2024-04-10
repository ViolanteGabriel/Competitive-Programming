#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solution()
{
    int nShips, krakenAttacks, HPaux, sinkedShips, krakenAttacksHalf01, krakenAttacksHalf02;
    vector<int> shipsHP;
    cin >> nShips >> krakenAttacks;
    for (int i = 0; i < nShips; i++)
    {
        cin >> HPaux;
        shipsHP.push_back(HPaux);
    }

    krakenAttacksHalf01 = (krakenAttacks/2 + krakenAttacks%2);
    krakenAttacksHalf02 = (krakenAttacks/2);
    sinkedShips = 0;

    for (int i = 0; krakenAttacksHalf01 > 0 and i < nShips; i++)
    {
        krakenAttacksHalf01 = krakenAttacksHalf01 - shipsHP[i];
        if (krakenAttacksHalf01 >= 0)
        {
            shipsHP[i] = 0;
            sinkedShips++;
        } 
        else if (krakenAttacksHalf01 < 0) shipsHP[i] -= (krakenAttacksHalf01  + shipsHP[i]);
    }

    for (int i = (nShips - 1); krakenAttacksHalf02 > 0; i--)
    {
        if (shipsHP[i] == 0 || krakenAttacksHalf02 == 0) break;
        krakenAttacksHalf02 = krakenAttacksHalf02 - shipsHP[i];
        if (krakenAttacksHalf02 >= 0)
        {
            shipsHP[i] = 0;
            sinkedShips++;
        }
        else if (krakenAttacksHalf02 < 0) shipsHP[i] -= krakenAttacksHalf02 + shipsHP[i];
    }
    cout << sinkedShips << endl;
    return;
}

int main(int argc, char const *argv[])
{
    int nTests;
    cin >> nTests;

    for (int i = 0; i < nTests; i++) solution();
    return 0;
}

