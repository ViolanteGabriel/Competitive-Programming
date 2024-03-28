#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string aux;
    vector<string> words;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        words.push_back(aux);
    } 
    for (int i = 0; i < n; i++)
    {
        if (words[i].length() > 10)
        {
            words[i] = words[i][0] + to_string(words[i].length() - 2) + words[i][words[i].length() - 1];
        }
        cout << words[i] << endl;
    }
    return 0;
}
