#include <stdio.h>
#include <stdlib.h>

void print_sumMatrix(FILE *file){
    long long matrix[5][5] = {0};
    long long aux;
    while(!(feof(file))){
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                fscanf(file, "%lld ", &aux);
                matrix[i][j] += aux;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
            printf("%lld ", matrix[i][j]);
        printf("\n");
    }
}

int main(int argc, char **argv){
    char file_name[100];
    scanf("%s ", &file_name);
    FILE *file = fopen(file_name, "rb");
    if (file == NULL){
        printf("This %s file does not exit.\n", argv[1]);
        return EXIT_FAILURE;
    }
    print_sumMatrix(file);
    fclose(file);
    return EXIT_SUCCESS;
}
