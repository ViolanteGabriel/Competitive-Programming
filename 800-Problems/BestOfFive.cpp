#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, Acounter, Bcounter;
    string word;
    cin >> t;
    for (int i = 0, Acounter = 0, Bcounter = 0; i < t; i++, Acounter = 0, Bcounter = 0)
    {
        cin >> word;
        for (int j = 0; j < 5; j++)
        {
            if (word[j] == 'A') Acounter++;
            else if (word[j] == 'B') Bcounter++;
        }
        if (Acounter >= Bcounter) cout << "A" << endl;
        else if (Bcounter > Acounter) cout << "B" << endl;
    }
    return 0;
}
