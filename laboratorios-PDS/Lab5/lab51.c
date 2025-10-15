#include <stdio.h>
#include <string.h>

#define NAME_MAX_LENGTH 50

typedef struct person{
    char name[NAME_MAX_LENGTH];
    int age;
    float salary;    
} person_st;

int main(int argc, char const *argv[]){
    int n = 0;
    char input[NAME_MAX_LENGTH], find_name[NAME_MAX_LENGTH];
    person_st employees[4];
    while(fgets(input, 50, stdin) != NULL){
        input[strcspn(input, "\n")] = '\0';

        if(strcmp(input, "inserir") == 0){
            if (n < 4){
                scanf("%s %d %f", &employees[n].name, &employees[n].age, &employees[n].salary);
                printf("Registro %s %d %.2f inserido\n", employees[n].name, employees[n].age, employees[n].salary);
                n++;
            }
            else
                printf("Espaco insuficiente\n");
        }
        else if(strcmp(input, "mostrar") == 0){
            fgets(find_name, 50, stdin);
            find_name[strcspn(find_name, "\n")] = '\0';

            for (int i = 0; i < 4; i++){
                if (strcmp(find_name, employees[i].name) == 0){
                    printf("Registro %s %d %.2f\n", employees[i].name, employees[i].age, employees[i].salary);
                    break;
                }
                if (i == 3)
                    printf("Registro ausente\n");
            }
            
        }
    }
    return 0;
}

