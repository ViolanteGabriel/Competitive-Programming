#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(int argc, char const *argv[])
{
    int nTests, nContainers, volume, average, distanceFromAverage, totalDistance;
    vector<int> containersVolume;
    cin >> nTests;
    for (int i = 0; i < nTests; i++, average = 0, distanceFromAverage = 0, totalDistance = 0)
    {
        cin >> nContainers;
        for (int j = 0; j < nContainers; j++)
        {
            cin >> volume;
            average = average + volume; 
            containersVolume.push_back(volume);
        }
        average = average / nContainers;
        for (int j = nContainers - 1; j >= 0; j--)
        {
            distanceFromAverage = containersVolume[j] - average;
            totalDistance = totalDistance + distanceFromAverage;
            if (totalDistance > 0)
            {
                cout << "NO" << endl;
                break;
            }
            else if (totalDistance == 0 && j == 0) cout << "YES" << endl;
        }
        containersVolume.clear();
    }       
    return 0;
}
