#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int colunas, linhas;
    string aux;
    cin >> linhas >> colunas;
    vector<string> imagem;
    for (int i = 0; i < linhas; i++)
    {
        cin >> aux;
        imagem.push_back(aux);
    }
    for (int i = 0; i < colunas + 2; i++) cout << "#";
    cout << endl;
    for (int i = 0; i < linhas; i++) cout << "#" << imagem[i] << "#" << endl;
    for (int i = 0; i < colunas + 2; i++) cout << "#";
    return 0;
}
