#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, multiplesOf2 = 0, multiplesOf3 = 0, multiplesOf5 = 0, multiplesOfall = 0;
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0) multiplesOfall++;
        if (i % 2 == 0) multiplesOf2++;
        if (i % 3 == 0) multiplesOf3++;
        if (i % 5 == 0) multiplesOf5++;
    }
    printf("Múltiplos de 2: %d\nMúltiplos de 3: %d\nMúltiplos de 5: %d\nMúltiplos de todos: %d", multiplesOf2, multiplesOf3, multiplesOf5, multiplesOfall);
    return 0;
}
