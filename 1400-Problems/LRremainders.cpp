#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int vector_product(vector<int> array, int m)
{
    int product = 1;
    for (int i = 0; i < array.size(); i++)  
    {
        product = product * array[i];
        product = product % m;
    }
    return product;
}

void solution()
{
    int arrayLength, m, aux;
    vector<int> arrayA;
    string commands;
    cin >> arrayLength >> m;
    for (int i = 0; i < arrayLength; i++)
    {
        cin >> aux;
        arrayA.push_back(aux);
    }
    cin >> commands;
    for (int i = 0; i < arrayLength; i++)
    {
        cout << (vector_product(arrayA, m)) << " ";
        if (commands[i] == 'L') arrayA.erase(arrayA.begin());
        else if (commands[i] == 'R') arrayA.pop_back();
    }
    cout << endl;

}

int main()
{
    int nTests; cin >> nTests;
    for (int i = 0; i < nTests; i++) solution();
    return 0;
}