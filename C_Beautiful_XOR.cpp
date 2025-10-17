#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;  if (a == b) {cout << 0 << endl; return;}
    
    bitset<128> avec(a);
    bitset<128> bvec(b);

    // Queremos que A se torne B. Mas isso pode ser
    // feito com uma operação apenas não?
    // podemos contruir a resposta a partir de a e b;

    // cout << "A: " << avec << endl;
    // cout << "B: " << bvec << endl;

    int msb = 0, msa = 0;

    for (int i = avec.size()-1; i >=0; i--)
    {
        if (avec[i] == 1) {
            msa = i;
            break;
        }
    }

    for (int i = bvec.size()-1; i >= 0; i--)
    {
        if (bvec[i] == 1) {
            msb = i;

            break;
        }
    }
    

    if (msb > msa) {
        cout << -1 << endl;
        return;
    }

    vector<int> ans;
    int cnt = 0;
    int num = 0;

    for (int i = 0; i < msa; i++)
    {
        avec[i] = avec[i] xor bvec[i];
        if (avec[i] == 1) num += (int)pow(2, i);
    }
    cnt++;

    if (avec[msa] xor bvec[msa] == 1) {
        cout << 2 << endl;
        cout << num << " " << (int)pow(2, msa) << endl;
    }
    else {
        cout << 1 << endl;
        cout << num << endl;
    }
    return;
}

int32_t main(){
    int t;
    cin >> t;
    while(--t)
        solve();
    solve();
    return 0;
}