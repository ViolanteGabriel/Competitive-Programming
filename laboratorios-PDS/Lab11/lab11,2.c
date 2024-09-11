#include <stdio.h>
#include <stdlib.h>

 long int fibonacci(int n){
    if (n == 2 || n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
 }

int main(int argc, char const *argv[]){
    int n; 
    scanf("%d", &n);
    getchar();

    printf("%ld", fibonacci(n));
    return 0;
}
