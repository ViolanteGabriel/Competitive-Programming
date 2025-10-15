#include <stdio.h>

void prime(int m, int *p1, int *p2){
    for (int i = m-1; i > 1 ; i--){
        for (int j = 2; j < i; j++){
            if (i % j == 0) break;
            if (j == i - 1){
                *p1 = i;
                printf("%d\n", *p1);
                i = 9999;
                break;
            }
        }
        if (i == 9999) break;
    }

    for (int i = m+1; i > 1 ; i++){
        for (int j = 2; j < i; j++){
            if (i % j == 0) break;
            if (j == i - 1){
                *p2 = i;
                printf("%d\n", *p2);
                i = 9999;
                break;
            }
        }
        if (i == 9999) break;
    }
    
}

int main(int argc, char const *argv[]){
    int m, p1, p2;
    scanf("%d", &m);
    prime(m, &p1, &p2);
    return 0;
}
