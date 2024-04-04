#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, sum = 0;
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) sum += i;
    printf("%d", sum);
    return 0;
}
