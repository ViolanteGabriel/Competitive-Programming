#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int nTests, squareLength, counterLines = 0, couterColumns = 0;
    cin >> nTests;
    for (int i = 0; i < nTests; i++)
    {
        cin >> squareLength;
        for (int j = 0; j < squareLength * 2; j++)
        {
            if (counterLines == 0 || counterLines == 1) couterColumns = 0;
            else if (counterLines == 2 || counterLines == 3) couterColumns = 1;
            for (int z = 0; z < squareLength; z++)
            {
                if (couterColumns == 0)
                {
                    cout << "##";
                    couterColumns++;
                }
                else if (couterColumns == 1)
                {
                    cout << "..";
                    couterColumns++;
                }
                if (couterColumns == 2) couterColumns = 0; 
            }
            cout << endl;
            if (counterLines == 3) counterLines = 0;
            else counterLines++;
        }
        couterColumns = 0;
        counterLines = 0;
    }
    
    return 0;
}
