#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define endl '\n'
#define ll long long
using namespace std;

void solve()
{
    string bits; cin >> bits;
    char move;
    int ScoreOmar = 0, ScoreOlga = 0, movimentos, posicao_inicial, posicao_atual; cin >> movimentos;
    forn(i, bits.size())
        if (bits[i] == '1') posicao_inicial = i;

    posicao_atual = posicao_inicial;

    forn(i, movimentos)
    {
        cin >> move;
        if (move == '>')
        {
            posicao_atual++;
            if(posicao_atual == 0 || posicao_atual == bits.size() - 1)
            {
                ScoreOlga++;
                posicao_atual = posicao_inicial;
            }
        }
        else
        {
            posicao_atual--;
            if (posicao_atual == 0 || posicao_atual == bits.size() - 1)
            {
                ScoreOmar++;
                posicao_atual = posicao_inicial;
            }
        }
    }
    if (ScoreOlga > ScoreOmar) cout << "OLGA";
    if (ScoreOmar > ScoreOlga) cout << "OMAR";
    if (ScoreOmar == ScoreOlga) cout << "DRAW";
}

int main()
{
    solve();
}