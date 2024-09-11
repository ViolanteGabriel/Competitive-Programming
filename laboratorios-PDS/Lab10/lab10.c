#include <stdio.h>
#include <stdlib.h>

void ler_vetor(int *vetor, int n){
    for (int i = 0; i < n; i++)
        scanf("%d", &vetor[i]);
}

int main(int argc, char const *argv[]){
    int n;
    int *vetor;
    scanf("%d", &n);
    getchar();

    vetor = (int *)malloc(n * sizeof(int));
    ler_vetor(vetor, n);

    for (int i = 0; i < n; i++)
        printf("%d\n", vetor[i]);
    free(vetor); 
    vetor = NULL;
    return 0;
}
