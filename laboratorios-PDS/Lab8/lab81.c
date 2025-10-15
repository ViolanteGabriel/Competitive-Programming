#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void media(double *vet, int n, int *prox){
    double media = 0;
    double diff;
    
    for (int i = 0; i < n; i++)
        media = media + vet[i];
    media /= n;
    diff = fabs(media - vet[0]);
    *prox = 0;
    for (int i = 0; i < n; i++){
        if (fabs(media - vet[i]) < diff){
            diff = fabs(media - vet[i]);
            *prox = i;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, prox;
    double vet[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lf", &vet[i]);
    
    media(vet, n, &prox);
    printf("%d\n", prox);
    return 0;
}
