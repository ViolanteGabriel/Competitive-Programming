#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, gridSize, aux, occurence_1, occurrence_2;
    string line;
    vector<string> gridLines;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> gridSize;
        for (int j = 0; j < gridSize; j++) 
        {
            cin >> line;
            gridLines.push_back(line);
            
        }
        occurence_1 = 0, occurrence_2 = 0;
        for (int j = 0; j < gridSize; j++)
        {
            occurence_1 = count(gridLines[j].begin(), gridLines[j].end(), '1');
            if (occurence_1 > 0 && j < gridSize)
            {
                occurrence_2 = count(gridLines[j + 1].begin(), gridLines[j + 1].end(), '1');
                if (occurence_1 == occurrence_2) cout << "SQUARE" << endl;
                else if (occurence_1 != occurrence_2) cout << "TRIANGLE" << endl;
            }
        }
    }
    return 0;
}
