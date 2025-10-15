#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<pair<int, int>> movements = {
    {1, 0}, // down
    {0, 1}, // right
    {-1, 0}, // up
    {0, -1}, // left
    {1, 1}, // right down diagonal
    {-1, 1}, // right upper diagonal
    {1, -1}, // left down diagonal
    {-1, -1}, // left upper diagonal
};

int main(int argc, char const *argv[])
{
    int nLines, nColumns, counter = 0;
    string aux;
    vector<string> linesContent;
    cin >> nLines >> nColumns;
    for (int i = 0; i < nLines; i++)
    {
        cin >> aux;
        linesContent.push_back('.' + aux + '.');
    }
    aux.clear();
    for (int i = 0; i < nColumns + 2; i++) aux = aux + '.';
    linesContent.push_back(aux);
    linesContent.insert(linesContent.begin(), aux);
    for (int i = 1; i < nLines + 1; i++)
    {
        for (int j = 1; j < nColumns + 1; j++)
        {
            if (linesContent[i][j] != '#')
            {
                for (auto& movement : movements)
                {
                    if (linesContent[i + movement.first][j + movement.second] == '#') counter++;
                }
                linesContent[i][j] = counter + '0';
                counter = 0;
            }
        }
    }
    for (int i = 1; i < nLines + 1; i++) cout << linesContent[i].substr(1, linesContent[i].length() - 2) << endl;        
    return 0;
}
