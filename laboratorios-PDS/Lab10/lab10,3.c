#include <stdio.h>
#include <stdlib.h>

void sum_vec(int *vec1, int *vec2, int *result, int vecSize){
    for (int i = 0; i < vecSize; i++){
        scanf("%d", &vec1[i]);
        getchar();
    }
    for (int i = 0; i < vecSize; i++){
        scanf("%d", &vec2[i]);
        result[i] = vec1[i] + vec2[i];
        getchar();
    }
}

int main(int argc, char const *argv[]){
    int *vec1, *vec2, *result, vecSize;
    scanf("%d", &vecSize);
    getchar();

    vec1 = (int *)malloc(vecSize * sizeof(int));
    vec2 = (int *)malloc(vecSize * sizeof(int));
    result = (int *)malloc(vecSize * sizeof(int));

    sum_vec(vec1, vec2, result, vecSize);
    for (int i = 0; i < vecSize; i++)
        printf("%d\n", result[i]);
    
    free(vec1);
    free(vec2);
    free(result);

    return 0;
}
