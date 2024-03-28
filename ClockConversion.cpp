#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int nTests, hourChecker;
    cin >> nTests;
    string hour, subString, subStringMinutes, finalString;
    for (int i = 0; i < nTests; i++)
    {
        cin >> hour;
        subString = hour.substr(0, 2);
        subStringMinutes = hour.substr(3, 5);
        hourChecker = stoi(subString);
        if (hourChecker - 12 >= 0)
        {
            // Horario PM
            if (hourChecker != 12)
            {
                hourChecker = hourChecker - 12;
                subString = to_string(hourChecker);
            }
            else subString = to_string(hourChecker);
            if (hourChecker < 10)
            {
                subString = "0" + subString;
            }
            finalString = subString + ":" + subStringMinutes + " PM";
            cout << finalString <<  endl; 

        }
        else if (hourChecker - 12 < 0)
        {
            // Horario AM
            if(hourChecker == 0) subString = to_string(hourChecker + 12);
            else if (hourChecker - 12 < 0)
            {
                subString = to_string(hourChecker);
            }
            if (hourChecker < 10)
            {
                if (hourChecker != 0) subString = "0" + subString;
            }
            finalString = subString + ":" + subStringMinutes + " AM";
            cout << finalString <<  endl; 
        }
    }
    return 0;
}
