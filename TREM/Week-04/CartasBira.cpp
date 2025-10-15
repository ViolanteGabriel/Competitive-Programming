#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define endl '\n'
#define ll long long
using namespace std;

int factorial(int number)
{
    int fatorial = 1;
    for (int i = 1; i <= number; i++)
    {
        fatorial = fatorial * i;
    }
    return fatorial;
}

void solve()
{
    int nCartas; cin >> nCartas;
    string baralho; cin >> baralho;
    ll combinations;
    int nA = 0, nB = 0, nC = 0, nD = 0, nE = 0, nF = 0, nG = 0, nH = 0, nI = 0, nJ = 0, nK = 0, nL = 0, nM = 0;
    forn(i, baralho.size())
    {
        if(baralho[i] == 'A') nA++;
        if(baralho[i] == 'B') nB++;
        if(baralho[i] == 'C') nC++;
        if(baralho[i] == 'D') nD++;
        if(baralho[i] == 'E') nE++;
        if(baralho[i] == 'F') nF++;
        if(baralho[i] == 'G') nG++;
        if(baralho[i] == 'H') nH++;
        if(baralho[i] == 'I') nI++;
        if(baralho[i] == 'J') nJ++;
        if(baralho[i] == 'K') nK++;
        if(baralho[i] == 'L') nL++;
        if(baralho[i] == 'M') nM++;
        
    }
    combinations = factorial(nCartas) / ( (factorial(nA) * factorial(nB) * factorial(nC) * factorial(nD) * factorial(nE) * factorial(nF) * factorial(nG) * factorial(nH) * factorial(nI) * factorial(nJ) * factorial(nK) * factorial(nL) * factorial(nM)));
    cout << combinations << endl;
}

int main()
{
    solve();
}