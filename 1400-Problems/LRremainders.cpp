#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void solution()
{
    int remaindersLength, m, aux, product = 1, lastElemmentIndexRight, lastElementIndexLeft, lastElemmentIndex;
    vector<int> remainders;
    vector<int> answer;
    string commands;
    cin >> remaindersLength >> m;
    for (int i = 0; i < remaindersLength; i++)
    {
        cin >> aux;
        remainders.push_back(aux);
    }
    lastElementIndexLeft = 0, lastElemmentIndexRight = remaindersLength - 1;
    cin >> commands;
    if (remaindersLength != 1)
    {
        for (int i = 0; i < remaindersLength; i++)                  
        {
            
            if (commands[i] == 'L') lastElementIndexLeft++;
            else if (commands[i] == 'R') lastElemmentIndexRight--;
            if (lastElementIndexLeft == lastElemmentIndexRight) 
            {
                lastElemmentIndex = lastElementIndexLeft;               //Pegando o index do ultimo elemento
                break;
            }
        }
        product = product * remainders[lastElemmentIndex] % m;
        for (int i = remaindersLength - 1; i >= 0; i--)
        {
            if (commands[i] == 'L' && i != remaindersLength - 1)
            {
                lastElementIndexLeft -= 1;
                product = product * remainders[lastElementIndexLeft] % m;
            }
            else if (commands[i] == 'R' && i != remaindersLength - 1)
            {
                lastElemmentIndexRight += 1;
                product = product * remainders[lastElemmentIndexRight] % m;
            }
            answer.insert(answer.begin(), product);
        }
        for (int i = 0; i < remaindersLength; i ++) cout << answer[i] << " ";
    }
    else cout << remainders[0] % m;
    cout << endl;
}

int main()
{
    int nTests; cin >> nTests;
    for (int i = 0; i < nTests; i++) solution();
    return 0;
}