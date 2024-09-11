#include <stdio.h>
#include <stdbool.h>

bool isPrime(long long number){
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (long long i = 3; i*i <= number; i+=2){
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long number;
    while(scanf("%lld", &number) == 1){
        if (number < 2)
            printf("-1\n");
        else if (isPrime(number))
            printf("1\n");
        else
            printf("0\n");    
    }
    return 0;
}
