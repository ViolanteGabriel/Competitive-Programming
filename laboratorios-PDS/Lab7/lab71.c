#include <stdio.h>
#include <string.h>

void countCharacter(FILE *file){
    int count = 0;
    char currentC;
    while(1){
        fread(&currentC, sizeof(currentC), 1, file);
        if (currentC == 'a')
            count++;
        if (feof(file)){
            printf("%d\n", count);
            return;
        }
    }
    printf("%d\n", count);
}

int main(int agrc, char **argv){
    FILE *file = fopen(argv[1], "rb");
    char fileName[100];
    scanf("%s ", &fileName);
    countCharacter(file);
    fclose(file);
    return 0;
}