#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; i++)
#define endl '\n'
#define ll long long
using namespace std;

void solve()
{
    int stringLength, nDeletions, oddOccurences = 0, counter = 0;
    char currentCharacter;
    string letters, lettersAfterDeletion;
    cin >> stringLength >> nDeletions;
    cin >> letters;

    if ((stringLength - nDeletions) % 2 == 0) // Se for par, o numero de  letras em quantidades impares após todas as deleções deve ser 0;
    {
        for (int i = 0; letters.size() > 0 && nDeletions >= 0; i = 0)
        {
            currentCharacter = letters[i];

            for (int j = 0; j < letters.size(); j++)
            {
                if (currentCharacter == letters[j]) counter++;
            }

            letters.erase(remove_if(letters.begin(), letters.end(), [&currentCharacter](char c) {return c == currentCharacter;}), letters.end());
            if (counter % 2 != 0)
                oddOccurences++;
            counter = 0;
        }
        if (oddOccurences - nDeletions <= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else                // Se for impar, o numero de letras que aparecem em quantidades impares após todas as deleções deve ser = 1;
    {
        for (int i = 0; letters.size() > 0 && nDeletions >= 0; i = 0)
        {
            currentCharacter = letters[i];

            for (int j = 0; j < letters.size(); j++)
            {
                if (currentCharacter == letters[j]) counter++;
            }

            letters.erase(remove_if(letters.begin(), letters.end(), [&currentCharacter](char c) {return c == currentCharacter;}), letters.end());
            if (counter % 2 != 0)
                oddOccurences++;
            counter = 0;
        }
        if (oddOccurences - nDeletions <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}

int main()
{
    int nTests; cin >> nTests;
    forn(i, nTests) solve();
    return 0;
}