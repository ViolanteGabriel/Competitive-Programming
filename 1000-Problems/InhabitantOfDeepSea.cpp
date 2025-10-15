#include <bits/stdc++.h>
using namespace std;

void solution()
{
    long long nShips, krakenAttacks, HPaux, sinkedShips, krakenAttacksHalf01, krakenAttacksHalf02, lastShipSinkedIndex;
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
        if (krakenAttacksHalf01 - shipsHP[i] >= 0) // Significa que o kraken consegue afundar
        {
            krakenAttacksHalf01 = krakenAttacksHalf01 - shipsHP[i]; // Descontou o numero de ataques do kraken
            sinkedShips++;
            shipsHP[i] = 0;
            if (krakenAttacksHalf01 == 0) lastShipSinkedIndex = i;
        }
        else if (krakenAttacksHalf01 - shipsHP[i] < 0)  // Se ele nao consegue afundar
        {
            shipsHP[i] = shipsHP[i] - krakenAttacksHalf01;
            lastShipSinkedIndex = i;
            krakenAttacksHalf01 = 0;
        }
    }

    for (int i = nShips-1; krakenAttacksHalf02 > 0 and i >= lastShipSinkedIndex; i--)
    {
        if (shipsHP[i] == 0) break; // Se o navio ja esta afundado siginifica que todos ja foram afundados
        if (krakenAttacksHalf02 - shipsHP[i] >= 0) // Significa que o Kraken consegue afundar
        {
            krakenAttacksHalf02 = krakenAttacksHalf02 - shipsHP[i];     // Descontar o numero de ataques do kraken
            sinkedShips++;
            shipsHP[i] = 0;
        }
        else if (krakenAttacksHalf02 - shipsHP[i] < 0)  // Se ele nao consegue afundar
        {
            shipsHP[i] = shipsHP[i] - krakenAttacksHalf02;
            krakenAttacksHalf02 = 0;
        }
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

