#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(int argc, char const *argv[])
{
    int nButons, lightedButton, aux, counter = 0;
    vector<int> buttons;
    cin >> nButons;
    for (int i = 0; i < nButons; i++)
    {
        cin >> aux;
        buttons.push_back(aux);
    }
    lightedButton = buttons[0];
    if (lightedButton == 2)
    {
        cout << '1' << endl;
        return 0;
    }
    for (int i = 0; i < nButons; i++)
    {
        lightedButton = buttons[lightedButton - 1];
        counter++;
        if (lightedButton == 2) 
        {
            counter++;
            cout << counter;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
