#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a > b){
        if (((c > b and c < a) and (d > b and d < a)) or ((c <= b or c >= a) and (d <= b or d >= a)))
            {cout << "no" << endl; return;}
    }
    else{
        if (((c > a and c < b) and (d > a and d < b)) or ((c <= a or c >= b) and (d <= a or d >= b)))
            {cout << "no" << endl; return;}
    }
    cout << "yes" << endl;
    return;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}