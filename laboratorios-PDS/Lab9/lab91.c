#include <stdio.h>
#include <string.h>

typedef enum {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} months;

typedef struct data{
    int dia;
    months mes;
    int ano;
} data_t;

typedef struct event{
    char nome[100];
    char localizcao[100];
    data_t data;
} event_t;

void cadastrar_eventos(event_t eventos[], int n){
    for (int i = 0; i < n; i++){
        scanf("%s %s %d %d %d", eventos[i].nome, eventos[i].localizcao, &eventos[i].data.dia, (int *)&eventos[i].data.mes, &eventos[i].data.ano);
        getchar();
    }
}

void imprimir_eventos(event_t eventos[], data_t data, int n){
    int encontrado = 1;
    for (int i = 0; i < n; i++){
        if (eventos[i].data.dia == data.dia && eventos[i].data.mes == data.mes && eventos[i].data.ano == data.ano){
            printf("%s %s\n", eventos[i].nome, eventos[i].localizcao);
            encontrado = 0;
        }
    }
    if (encontrado == 1)
        printf("Nenhum evento encontrado!");    
}

int main(int argc, char const *argv[]){
    int n;
    event_t eventos[100];
    data_t data_alvo;

    scanf("%d", &n);
    getchar();

    cadastrar_eventos(eventos, n);

    scanf("%d %d %d", &data_alvo.dia, (int *)&data_alvo.mes, &data_alvo.ano);
    getchar();

    imprimir_eventos(eventos, data_alvo, n);
    return 0;
}
