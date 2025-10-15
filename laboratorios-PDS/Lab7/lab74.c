#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact{
    char name[50];
    int age;
    char phoneNumber[20];
} contact_t;

void insert(FILE *file){
    contact_t contact;
    scanf("%s %d %s", &contact.name, &contact.age, &contact.phoneNumber);
    fseek(file, 0, SEEK_END);
    fwrite(&contact, sizeof(contact_t), 1, file);
    printf("Registro %s %d %s inserido\n", contact.name, contact.age, contact.phoneNumber);
}

void show(FILE *file){
    contact_t contact;
    char show_name[50];
    scanf("%s", &show_name);
    fseek(file, 0, SEEK_SET);
    while(fread(&contact, sizeof(contact_t), 1, file)){
        if (strcmp(contact.name, show_name) == 0){
            printf("Registro %s %d %s exibido\n", contact.name, contact.age, contact.phoneNumber);
            return;
        }
    }
    printf("Registro %s invalido\n", show_name);
}

int delete(FILE *file){
    int found = 0;
    contact_t contact;
    char target_name[50];

    scanf("%s", &target_name);
    fseek(file, 0, SEEK_SET);
    while(fread(&contact, sizeof(contact_t), 1, file)){

        if (strcmp(contact.name, target_name) == 0){
            printf("Registro %s %d %s excluido\n", contact.name, contact.age, contact.phoneNumber);
            strcpy(contact.name, "@@@@");
            fseek(file, -(sizeof(contact_t)), SEEK_CUR);
            fwrite(&contact, sizeof(contact_t), 1, file);
            found++;
            break;
        }
    }
    if (found == 0){
        printf("Registro %s invalido\n", target_name);
        return 0;
    }
    else return 1;
}

void change(FILE *file){
    int found = 0;
    contact_t contact;
    char target_name[50], new_name[50];

    scanf("%s %s", &target_name, &new_name);
    fseek(file, 0, SEEK_SET);

    while(fread(&contact, sizeof(contact_t), 1, file)){

        if (strcmp(contact.name, target_name) == 0){
            printf("Registro %s %d %s alterado\n", contact.name, contact.age, contact.phoneNumber);
            strcpy(contact.name, new_name);
            fseek(file, -(sizeof(contact_t)), SEEK_CUR);
            fwrite(&contact, sizeof(contact_t), 1, file);
            found++;
            break;
        }
    }
    if (found == 0) 
        printf("Registro %s invalido\n", target_name);
}

int counter_contacts(FILE *file){
    contact_t contact;
    int nContacts = 0;
    fseek(file, 0, SEEK_SET);
    while(fread(&contact, sizeof(contact_t), 1, file)){
        nContacts++;
    }
    return nContacts;
}

void menu(FILE *file){
    int ammountOfContacts = counter_contacts(file);
    char option[200];
    while (scanf("%s", &option) != 0){
        if (strcmp(option, "Inserir") == 0){
            if (ammountOfContacts == 100){
                printf("Espaco insuficiente\n");
                continue;
            }
            insert(file);
            ammountOfContacts++;
        }
        else if (strcmp(option, "Alterar") == 0)
            change(file);

        else if (strcmp(option, "Excluir") == 0){
            ammountOfContacts -= delete(file);
        }
        else if (strcmp(option, "Exibir") == 0) 
            show(file);
    }
}

int main(int argc, char **argv){
    char file_name[100];
    scanf("%s", &file_name);
    FILE *file = fopen(file_name, "rb+");
    menu(file);
    fclose(file);
    return EXIT_SUCCESS;
}
