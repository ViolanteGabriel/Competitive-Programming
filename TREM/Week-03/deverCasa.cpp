#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int numberL, numberR, biggest;
    cin >> numberL >> numberR;
    if (numberL >= numberR) biggest = numberL;
    else if (numberR > numberL) biggest = numberR;
    cout << biggest;
    return 0;
}
