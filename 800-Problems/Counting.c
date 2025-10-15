#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 228;
    do
    {
        if (number >= 300 && number <= 400) number += 3;
        else number += 5;
        printf("%d\n", number);
    } while (number < 457);
    return 0;
}
