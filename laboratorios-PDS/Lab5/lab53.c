#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct product {
    char name[50];
    char company[50];
    float price;
} product_st;

typedef struct marcas{
    char nome[50];
    float preco_medio;
    int quantidade;
} marcas_st;


int main(int argc, char const *argv[]){
    float preco_medio = 0;
    char ja_printado[50][8];
    product_st products[8];
    marcas_st marcas[8];

    for (int i = 0; i < 8; i++){
        scanf("%s %s %f", &products[i].name, &products[i].company, &products[i].price);
        preco_medio += products[i].price;
    }    
    preco_medio /= (float)8;
    printf("\n \n");
    for (int i = 0; i < 8; i++){
        int quantidade = 0;
        float preco_total = 0;
        for (int j = 0; j < 8; j++){
            if (strcmp(products[i].company, products[j].company) == 0){
                quantidade++;
                preco_total += products[j].price;
            }
        }
        strcpy(marcas[i].nome, products[i].company);
        marcas[i].quantidade = quantidade;
        marcas[i].preco_medio = preco_total/(float)quantidade;
    }
    
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (strcmp(marcas[i].nome, ja_printado[j]) == 0)
                break;
            if (j == 7){
                strcpy(ja_printado[i], marcas[i].nome);
                printf("%s %d\n", marcas[i].nome, marcas[i].quantidade);
            }
        }
    }
    printf("media total %.2f\n", preco_medio);
    char ja_printado2[50][8];
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (strcmp(marcas[i].nome, ja_printado2[j]) == 0)
                break;
            if (j == 7){
                strcpy(ja_printado2[i], marcas[i].nome);
                printf("media %s %.2f\n", marcas[i].nome, marcas[i].preco_medio);
            }
        }
    }
    
    return 0;
}

