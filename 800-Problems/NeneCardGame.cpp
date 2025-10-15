#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define for_each(i, container) for(auto i : container)
#define int long long
#define endl '\n'
#define ll long long

using namespace std;

unordered_map<int, int> Frequency(const vector<int> &nums){
    unordered_map<int, int> frequency;

    for_each(n, nums) 
        frequency[n]++;
    return frequency;
}

void solve(){
    int n, score = 0; cin >> n;
    vector<int> myHand(n);
    forn(i, n)
        cin >> myHand[i];
    unordered_map<int, int> reps = Frequency(myHand);
    for_each(i, reps)
        score += i.second - 1;
    cout << score << endl;
        
}

int32_t main(){
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}