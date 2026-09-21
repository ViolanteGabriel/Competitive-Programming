#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void solve()
{
    int remaindersLength, m, product = 1, lastElemmentIndexRight, lastElementIndexLeft, lastElemmentIndex;
    string commands;
    cin >> remaindersLength >> m;
    vector<int> remainders(remaindersLength);
    vector<int> answer(remaindersLength);

    for (int i = 0; i < remaindersLength; i++) cin >> remainders[i];

    lastElementIndexLeft = 0, lastElemmentIndexRight = remaindersLength - 1;
    cin >> commands;
    
    if (remaindersLength != 1)
    {
        for (int i = 0; i < remaindersLength; i++)                  
        {
            
            if (commands[i] == 'L') lastElementIndexLeft++;
            else if (commands[i] == 'R') lastElemmentIndexRight--;
            if (lastElementIndexLeft == lastElemmentIndexRight) {lastElemmentIndex = lastElementIndexLeft; break;}
        }

        product = (product * remainders[lastElemmentIndex]) % m;
        answer[remaindersLength - 1] = product;

        for (int i = remaindersLength - 2; i >= 0; i--)
        {
            if (commands[i] == 'L')
            {
                lastElementIndexLeft = lastElementIndexLeft - 1;
                product = (product * remainders[lastElementIndexLeft]) % m;
            }   
            else if (commands[i] == 'R')
            {
                lastElemmentIndexRight = lastElemmentIndexRight + 1;
                product = (product * remainders[lastElemmentIndexRight]) % m;
            }
            answer[i] = product;
        }
        for (int i = 0; i < remaindersLength; i ++) cout << answer[i] << " ";
    }
    else cout << remainders[0] % m;
    cout << endl;
}

int main()
{
    int nTests; cin >> nTests;
    for (int i = 0; i < nTests; i++) solve();
    return 0;
}