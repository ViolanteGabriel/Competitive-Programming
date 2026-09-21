#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
   int n; cin >> n;
   vector<int> a(n);
   forn(i, n) 
    cin >> a[i];

    pair<int, int> parCnt = {0, 0};
    pair<int, int> imparCnt = {0, 0};
    int z, k;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2) {
            parCnt.first++;
            parCnt.second = i;
        }
        else {
            imparCnt.first++;
            imparCnt.second = i;
        }
    }

    if (parCnt.first > imparCnt.first)
        cout << ++imparCnt.second << endl;
    else 
        cout << ++parCnt.second << endl;
}

int32_t main(){
    solve();
    return 0;
}



