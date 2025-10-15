    #include <bits/stdc++.h>
    using namespace std;
     
    int main(int argc, char const *argv[])
    {
        int age, cost;
        cin >> age >> cost;
        if (age >= 13) cout << cost << endl;
        else if (age >= 6 && age <= 12 ) cout << cost/2 << endl;
        else if (age <= 5) cout << 0 << endl;        
        return 0;
    }