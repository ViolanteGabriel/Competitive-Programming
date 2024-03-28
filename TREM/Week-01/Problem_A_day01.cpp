#include <iostream>
#include <string>
using namespace std;

bool equal_letters_verifier(string word)
{
    for (int i = 1; i < word.length(); i++)
    { 
        if (word[i] != word[0])
        {
            return false;
        }
    }
    return true;
}

bool palindrome_verifier(string word)
{
    int j = word.length() - 1;
    for (int i = 0; i < word.length(); i++)
    {
        if (i >= j) break;
        if (word[i] != word[j]) return false;
        j--;
    }
    return true;
}

void good_string_verifier(string word)
{
    char aux;
    for (int i = 0; i < word.length() / 2; i++)
    {
        if (word[(int(word.length()) / 2)] != word[i])
        {
            aux = word[i];
            word[i] = word[int(word.length() / 2)];
            word[(int(word.length()) / 2)] = aux;
            cout << word << endl;
            return;
        }
        
    }
    cout << "-1";
    return;
}

int main(int argc, char const *argv[])
{
    int n_words;
    string word;

    cin >> n_words;
    for (int i = 0; i < n_words; i++)
    {
        cin >> word;
        if (equal_letters_verifier(word))
        {
            cout << "-1" << endl;
        } 
        else if (!(palindrome_verifier(word)))
        {
            cout << word << endl;
        } 
        else
        {
           good_string_verifier(word); 
        }
    }
    return 0;
}
