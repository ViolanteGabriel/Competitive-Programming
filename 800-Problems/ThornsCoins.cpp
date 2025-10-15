#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void solution()
{
    int pathLength, i, collectedCoins; cin >> pathLength;
    char contentAUX;
    vector<char> pathContent;
    for (i = 0; i < pathLength; i++)
    {
        cin >> contentAUX;
        pathContent.push_back(contentAUX);
    }

    i = 0;
    collectedCoins = 0;

    while (i < pathLength)
    {
        if (pathContent[i + 1] == '@') {collectedCoins++; i++;}
        else if (pathContent[i + 2] == '@') {collectedCoins++; i += 2;}
        else if (pathContent[i + 1] == '.') i++;
        else if (pathContent[i + 2] == '.') i += 2;
        else break;
    }
    cout << collectedCoins << endl;
}

int main()
{
    int nTests; cin >> nTests;
    for (int i = 0; i < nTests; i++) solution();
    return 0;
}
