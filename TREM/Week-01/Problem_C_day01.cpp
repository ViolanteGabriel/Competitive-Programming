#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int circuitMaxDistance(vector<int> distancePerRunner)
{
    std::vector<int> sums;
    int answer;
    for (int i = 0, j = (distancePerRunner.size() - 1); i < j; i++, j--)
    {
        sums.push_back(distancePerRunner[i] + distancePerRunner[j]);
    }
    for (int i = 0; i < sums.size(); i++)
    {
        if (i == 0) answer = sums[i];
        else if (sums[i] < answer) answer = sums[i];
    }
    return answer;
}

int main(int argc, char const *argv[])
{
    int n_Runners, aux, answer;
    std::vector<int> distancePerRunner;
    cin >> n_Runners;

    for (int i = 0; i < n_Runners; i++)
    {
        cin >> aux;
        distancePerRunner.push_back(aux);
    } 
    sort(distancePerRunner.begin(), distancePerRunner.end());  
    answer = circuitMaxDistance(distancePerRunner);
    cout << answer;
    return 0;
}
