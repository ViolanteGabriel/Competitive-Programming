#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void solution()
{
    int nSigns, appocalipseDate, AUXsign; cin >> nSigns;
    vector<int> periodicityOfSigns;
    for (int  i = 0; i < nSigns; i++)
    {
        cin >> AUXsign;
        periodicityOfSigns.push_back(AUXsign);
    }

    appocalipseDate = periodicityOfSigns[0];
    
    for (int i = 1; i < nSigns; i++)
    {
        if (appocalipseDate >= periodicityOfSigns[i]) appocalipseDate = ((appocalipseDate / periodicityOfSigns[i]) + 1) * periodicityOfSigns[i];
        else appocalipseDate = periodicityOfSigns[i];
    }
    cout << appocalipseDate << endl;
}


int main()
{
    int nTests; cin >> nTests;
    for (int i = 0; i < nTests; i++) solution();
    return 0;
}

