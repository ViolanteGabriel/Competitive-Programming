#include <stdio.h>

void imprime(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

void multiplica(int vetor[], int tamanho, double multiplicador){
    for (int i = 0; i < tamanho; i++)
        vetor[i] *= multiplicador;
}

int main(int argc, char const *argv[])
{
    int tamanho;
    double multiplicador;
    scanf("%d ", &tamanho);

    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++)
        scanf("%d ", &vetor[i]);

    scanf("%lf ", &multiplicador);
    imprime(vetor, tamanho);
    multiplica(vetor, tamanho, multiplicador);
    imprime(vetor, tamanho);
    multiplica(vetor, tamanho, 1/multiplicador);
    imprime(vetor, tamanho);
    return 0;
}
