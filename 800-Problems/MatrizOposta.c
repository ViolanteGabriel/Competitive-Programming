#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nLinhas, nColunas;
    scanf("%d %d", &nLinhas, &nColunas);
    int matrix[nLinhas][nColunas];

    for (int i = 0; i < nLinhas; i++)
    {
        for (int j = 0; j < nColunas; j++) 
        {
            scanf("%d", &matrix[i][j]);   
            matrix[i][j] -= 2*matrix[i][j];
        }
    }

    for (int i = 0; i < nLinhas; i++)
    {
        for (int j = 0; j < nColunas; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
