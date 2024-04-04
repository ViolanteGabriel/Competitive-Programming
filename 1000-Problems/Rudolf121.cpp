#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int arraySize, arrayElement;
    vector<int> array;

    cin >> arraySize;

    for (int i = 0; i < arraySize; i++)
    {
        cin >> arrayElement;
        array.push_back(arrayElement);
    }
    
    for (int i = 1; i < arraySize - 1; i++)
    {
        if (array[i] < 0 || (array[i] - 2 <= 0 && array[i - 1] - 1 != 0))
        {
            cout << "NO" << endl;
            break;
        }
        while (array[i - 1] > 0)
        {
            array[i] -= 2;
            array[i - 1] -= 1;
            array[i + 1] -= 1;
        }
        if (i == arraySize - 2) cout << "YES" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int nTests;
    cin >> nTests;
    for (int i = 0; i < nTests; i++) solve();    
    return 0;
}

