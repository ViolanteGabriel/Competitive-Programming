#include <stdio.h>
#include <stdbool.h>

bool isPrime(long long number){
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (long long i = 3; i*i <= number; i+=2){
        if (number % i == 0)
            return false;
    }
    return true;
}

void sumPrime(int firstNPrimes){
    long long sum = 0;
    for (long long i = 1; firstNPrimes != 0; i++){
        if(isPrime(i)){
            firstNPrimes--;
            sum += i;
        }
    }
    printf("%lld\n", sum);
    return;
}

int main(int argc, char const *argv[]){
    int firstNPrimes;
    while(scanf("%d", &firstNPrimes) == 1)
        sumPrime(firstNPrimes);
    return 0;
}

