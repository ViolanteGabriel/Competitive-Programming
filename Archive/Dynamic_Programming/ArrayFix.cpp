#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FIRST_DIGIT brokenNumber / 10
#define SECOND_DIGIT brokenNumber % 10
using namespace std;

void solution()
{
    int n; cin >> n;
    int aux, brokenNumber;
    vector<int> vetor;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        vetor.push_back(aux);
    }

    for (int i = 0; i < vetor.size() - 1; i++)
    {
        if ((vetor[i] > vetor[i + 1]))
        {
            if (vetor[i] >= 10)
            {  
                brokenNumber = vetor[i];
                if (FIRST_DIGIT > SECOND_DIGIT) {cout << "NO" << endl; return;}
                vetor[i] = FIRST_DIGIT;
                vetor.insert(vetor.begin() + i + 1, SECOND_DIGIT);
                i = -1;
            }
            else {cout << "NO" << endl; return;}
        }   
    }
    cout << "YES" << endl;
}

int main()
{
    int nTests; cin >> nTests;
    for (int i = 0; i < nTests; i++) solution();
    return 0;
}