#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < int(n); i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;


void solve(){
    string s;
    cin >> s;

    bool ehZero = true;
    for (int i = 0; i < s.size(); i++)
    {
        int n = s[i] - '0';

        if (i == 0 and n == 9) {
            cout << n;
            continue;
        }

        if (n > 4)
            cout << 9 - n;
        else 
            cout << s[i];
    }
    cout << endl;
    
}

int32_t main(){
    solve();
    return 0;
}



