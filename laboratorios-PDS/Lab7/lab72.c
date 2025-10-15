#include <stdio.h>
#include <stdlib.h>

void searchA(FILE *file){
    int a;
    int counter = 0;
    while ((a = fgetc(file)) != EOF)
        if (a == 'a') counter++;
    printf("%d\n", counter);
}


int main(int argc, char **argv){
    if (argc < 1){
        printf("Error, insert a name of a file.\n");
        return EXIT_FAILURE;
    }
    char file_name[100];
    scanf("%s ", &file_name);
    FILE *file = fopen(file_name, "rb");
    if (file == NULL){
        printf("This %s file does not exit.\n", argv[1]);
        return EXIT_FAILURE;
    }
    searchA(file);
    fclose(file);
    return EXIT_SUCCESS;
}
