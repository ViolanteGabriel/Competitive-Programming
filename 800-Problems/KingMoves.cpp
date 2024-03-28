#include <math.h>
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int column, row, kingMoves = 0;
    char CharColumn, CharRow;
    string kingPosition;
    row = kingPosition[1] - '0';
    column = (int)kingPosition[0] - 96;
    if ( (row == 1 || row == 8) && (column == 1 || column == 8)) kingMoves = 3;
    else if ( row == 1 || row == 8 || column == 1 || column == 8) kingMoves = 5;
    else kingMoves = 8;
    cout << kingMoves;
    return 0;
}
