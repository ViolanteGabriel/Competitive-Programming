#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int numberOfTiles, lengthOfBlock, color, lastIndiceOfFristElement, j = 0;
    vector<int> tileColors;
    cin >> numberOfTiles >> lengthOfBlock;
    for (int i = 0; i < numberOfTiles; i++)
    {
        cin >> color;
        tileColors.push_back(color);
    }

    if (count(tileColors.begin(), tileColors.end(), tileColors[numberOfTiles - 1]) < lengthOfBlock || count(tileColors.begin(), tileColors.end(), tileColors[0]) < lengthOfBlock)
    {
        cout << "no" << endl;
        return;
    }
    else if(tileColors[numberOfTiles - 1] == tileColors[0])
    {
        cout << "yes" << endl;
        return;
    }

    for (int i = 0; i < numberOfTiles; i++)
    {
        if (tileColors[i] == tileColors[0]) j++;
        if (j == lengthOfBlock)
        {
            lastIndiceOfFristElement = i;
            break;
        }
    }
    
    if (count(tileColors.begin() + lastIndiceOfFristElement, tileColors.end(), tileColors[numberOfTiles - 1]) >= lengthOfBlock)
        cout << "yes" << endl;
    else 
        cout << "no" << endl;
    
    
}

int main(int argc, char const *argv[])
{
    int nTests;
    cin >> nTests;
    for (int i = 0; i < nTests; i++)
    {
        solve();
    }
    return 0;
}
