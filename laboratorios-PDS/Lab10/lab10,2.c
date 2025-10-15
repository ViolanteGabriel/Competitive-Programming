#include <stdio.h>
#include <stdlib.h>

int **build_matrix(int nLines, int nColumns){
    int **matrix = (int **)malloc(nLines * sizeof(int *));
    for (int i = 0; i < nLines; i++){
        matrix[i] = (int *)malloc(nColumns * sizeof(int));
        for (int j = 0; j < nColumns; j++){
            scanf("%d", &matrix[i][j]);
            printf("%d ", matrix[i][j]);
            getchar();
        }
        printf("\n");
    }
    return matrix;
}

void free_matrix(int **matrix, int nLines){
    for (int i = 0; i < nLines; i++)
        free(matrix[i]);
    free(matrix);
}

int main(int argc, char const *argv[]){
    int nLines, nColumns;
    scanf("%d %d", &nLines, &nColumns);
    getchar();

    int **matrix = build_matrix(nLines, nColumns);
    free_matrix(matrix, nLines);
    
    return 0;
}
