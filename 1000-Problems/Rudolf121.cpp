#include <bits/stdc++.h>
using namespace std;

int biggest_number_in_array(vector<int> array)
{
    int max = numeric_limits<int>::min(), maxIndice;
    for (int i = 1; i < array.size() - 1; i++)
    {
        if (array[i] > max) 
        {
            max = array[i];
            maxIndice = i;
        }
    }
    return maxIndice;
} 

int main(int argc, char const *argv[])
{
    int nTests, arraySize, arrayElement, biggestElementIndice = 1;
    vector<int> array;
    cin >> nTests;
    for (int i = 0; i < nTests; i++)
    {
        cin >> arraySize;
        for (int j = 0; j < arraySize; j++)
        {
            cin >> arrayElement;
            array.push_back(arrayElement);
        }
        do
        {
            biggestElementIndice = biggest_number_in_array(array);
            if (array[biggestElementIndice - 1] != 0 && array[biggestElementIndice + 1] != 0)
            {

            }
            else
            {
                cout << "NO" << endl
            }
        } while (array[biggestElementIndice] != 0)
        
    }
    
    return 0;
}
