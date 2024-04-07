#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(int argc, char const *argv[])
{
    int nTests, encodedWord;
    char alphabetLetters[26] = {'a' , 'b', 'c' , 'd', 'e', 'f', 'g', 'h', 'i' , 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<char> smallestWord;
    cin >> nTests;

    for (int i = 0; i < nTests; i++)
    {
        cin >> encodedWord;
        if (encodedWord < 28)
        {
            encodedWord = encodedWord - 2;
            smallestWord.push_back('a');
            smallestWord.push_back('a');
            smallestWord.push_back(alphabetLetters[encodedWord - 1]);
        }
        else
        {
            while (encodedWord >= 28)
            {
                encodedWord = encodedWord - 26;
                smallestWord.push_back('z');
            }
            if (smallestWord.size() == 1)
            {
                smallestWord.insert(smallestWord.begin(), alphabetLetters[encodedWord - 2]);
                encodedWord = encodedWord - (encodedWord - 1);
                smallestWord.insert(smallestWord.begin(),alphabetLetters[encodedWord - 1]);
            }
            else
            {
                smallestWord.insert(smallestWord.begin(), alphabetLetters[encodedWord - 1]);
            } 
        }
        for (int i = 0; i < smallestWord.size(); i++)
        {
            cout << smallestWord[i];
        }
        cout << endl;
        smallestWord.clear();
    }
    return 0;
}
