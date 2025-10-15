#include <stdio.h>
#include <string.h>

#define NAME_MAX_LENGTH 50

typedef struct address{
    char rua[NAME_MAX_LENGTH];
    int numero;
    char estado[NAME_MAX_LENGTH]
} address_st;

typedef struct person{
    char name[NAME_MAX_LENGTH];
    int age;
    float salary;    
    address_st address;
} person_st;

int main(int argc, char const *argv[]){
    int n = 0;
    char input[NAME_MAX_LENGTH], find_name[NAME_MAX_LENGTH];
    person_st employees[5];
    person_st te;
    while(fgets(input, 50, stdin) != NULL){
        input[strcspn(input, "\n")] = '\0';

        if(strcmp(input, "inserir") == 0){
            if (n < 5){
                scanf("%s %d %f %s %d %s", &employees[n].name, &employees[n].age, &employees[n].salary, &employees[n].address.rua, &employees[n].address.numero, &employees[n].address.estado);
                printf("Registro %s %d %.2f %s %d %s inserido\n", employees[n].name, employees[n].age, employees[n].salary,  employees[n].address.rua, employees[n].address.numero, employees[n].address.estado);
                n++;
            }
            else
                printf("Espaco insuficiente\n");
        }
        else if(strcmp(input, "mostrar") == 0){
            fgets(find_name, 50, stdin);
            find_name[strcspn(find_name, "\n")] = '\0';

            for (int i = 0; i < 5; i++){
                if (strcmp(find_name, employees[i].name) == 0){
                    printf("Registro %s %d %.2f %s %d %s\n", employees[i].name, employees[i].age, employees[i].salary, employees[i].address.rua, employees[i].address.numero, employees[i].address.estado);
                    break;
                }
                if (i == 4)
                    printf("Registro ausente\n");
            }
        }
        else if (strcmp(input, "alterar") == 0){
            scanf("%s %d %f %s %d %s", &te.name, &te.age, &te.salary, &te.address.rua, &te.address.numero, &te.address.estado);
            for (int i = 0; i < 5; i++){
                if (strcmp(te.name, employees[i].name) == 0){
                    employees[i] = te;
                    printf("Registro %s %d %.2f %s %d %s alterado\n", employees[i].name, employees[i].age, employees[i].salary, employees[i].address.rua, employees[i].address.numero, employees[i].address.estado);
                    break;    
                }
                if (i == 4)
                    printf("Registro ausente para alteracao\n");
            }
        }
    }
    return 0;
}

