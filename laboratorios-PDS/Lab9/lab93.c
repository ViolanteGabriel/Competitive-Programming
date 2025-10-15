#include <stdio.h>
#include <math.h>

typedef struct iris{
    double comp_sepala;
    double larg_sepala;
    double comp_petala;
    double larg_petala;
    char tipo[50];
} iris_t;

void classificar(iris_t nao_iden, iris_t registros_iden[], int n){
    double menor_dist;
    int menor_dist_i;
    for (int i = 0; i < n; i++){
        if (i == 0){
            menor_dist = sqrt((nao_iden.comp_sepala - registros_iden[i].comp_sepala)*(nao_iden.comp_sepala - registros_iden[i].comp_sepala) + (nao_iden.larg_sepala - registros_iden[i].larg_sepala)*(nao_iden.larg_sepala - registros_iden[i].larg_sepala) + (nao_iden.comp_petala - registros_iden[i].comp_petala)*(nao_iden.comp_petala - registros_iden[i].comp_petala) + (nao_iden.larg_petala - registros_iden[i].larg_petala)*(nao_iden.larg_petala - registros_iden[i].larg_petala));
            menor_dist_i = i;
        }
        else{
            if (sqrt((nao_iden.comp_sepala - registros_iden[i].comp_sepala)*(nao_iden.comp_sepala - registros_iden[i].comp_sepala) + (nao_iden.larg_sepala - registros_iden[i].larg_sepala)*(nao_iden.larg_sepala - registros_iden[i].larg_sepala) + (nao_iden.comp_petala - registros_iden[i].comp_petala)*(nao_iden.comp_petala - registros_iden[i].comp_petala) + (nao_iden.larg_petala - registros_iden[i].larg_petala)*(nao_iden.larg_petala - registros_iden[i].larg_petala)) < menor_dist){
                menor_dist = sqrt((nao_iden.comp_sepala - registros_iden[i].comp_sepala)*(nao_iden.comp_sepala - registros_iden[i].comp_sepala) + (nao_iden.larg_sepala - registros_iden[i].larg_sepala)*(nao_iden.larg_sepala - registros_iden[i].larg_sepala) + (nao_iden.comp_petala - registros_iden[i].comp_petala)*(nao_iden.comp_petala - registros_iden[i].comp_petala) + (nao_iden.larg_petala - registros_iden[i].larg_petala)*(nao_iden.larg_petala - registros_iden[i].larg_petala));
                menor_dist_i = i;
            }
        }
    }
    printf("%s\n", registros_iden[menor_dist_i].tipo);
    
}

int main(int argc, char const *argv[]){
    int n;
    scanf("%d ", &n);
    iris_t flores[n];
    iris_t flor_desconhecida;

    for (int i = 0; i < n; i++)
        scanf("%lf %lf %lf %lf %s ", &flores[i].comp_sepala, &flores[i].larg_sepala, &flores[i].comp_petala, &flores[i].larg_petala, flores[i].tipo);
    
    scanf("%lf %lf %lf %lf", &flor_desconhecida.comp_sepala, &flor_desconhecida.larg_sepala, &flor_desconhecida.comp_petala, &flor_desconhecida.larg_petala);
    classificar(flor_desconhecida, flores, n);

}
