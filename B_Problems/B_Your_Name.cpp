#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    string texto, nome;
    cin >> texto >> nome;

    if (texto.size() != nome.size()) {
        cout << "NO" << endl;
        return;
    }

    unordered_map<char, int> contagem_texto;
    unordered_map<char, int> contagem_nome;

    

    for (int i = 0; i < texto.size(); i++)
    {
        contagem_texto[texto[i]]++;
    }

    for (int i = 0; i < nome.size(); i++)
    {
        contagem_nome[nome[i]]++;
    }

    for_each(letra, contagem_texto) {
        if (contagem_texto[letra.first] != contagem_nome[letra.first]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}