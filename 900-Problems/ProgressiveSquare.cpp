#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    int nTests, squareSize, C, D, aux, smallestNumber, auxLine;
    vector<int> progressiveIdealSquare;
    vector<int> vetorElementsMatrix;
    set<int> elementsMatrix;
    cin >> nTests;

    for (int i = 0; i < nTests; i++)
    {
        cin >> squareSize >> C >> D;
        for (int j = 0; j < squareSize * squareSize; j++)
        {
            cin >> aux;
            vetorElementsMatrix.push_back(aux);
            elementsMatrix.insert(aux);
        }

        smallestNumber = *elementsMatrix.begin();
        aux = smallestNumber;
        auxLine = smallestNumber;

        for (int j=0; j<squareSize ; j++)
        {
            aux = auxLine;
            for (int k=0; k <squareSize; k++)
            {
                progressiveIdealSquare.push_back(aux);
                aux = aux + D;
            }
            auxLine = auxLine + C;
        }
        sort(progressiveIdealSquare.begin(), progressiveIdealSquare.end());
        sort(vetorElementsMatrix.begin(), vetorElementsMatrix.end());


        for (int j = 0; j < progressiveIdealSquare.size(); j++)
        {
            if (progressiveIdealSquare[j] != vetorElementsMatrix[j]) {
                cout << "NO" << endl;
                break;
            }
            if (j == progressiveIdealSquare.size() - 1) cout << "YES" << endl;
        }


        elementsMatrix.clear();
        progressiveIdealSquare.clear();
        vetorElementsMatrix.clear();
    }
    return 0;
}