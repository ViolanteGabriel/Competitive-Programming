#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delete_char(char *word, char letter){
    if (*word == '\0')
        return;
    else if (*word == letter){
        memmove(word, word + 1, strlen(word));
        delete_char(word, letter);
    }
    else
        delete_char(word+1, letter);
}

int main(int argc, char const *argv[]){
    char word[100];
    char letter;
    fgets(word, 100, stdin);
    scanf("%c", &letter);
    getchar;

    delete_char(word, letter);
    printf("%s", word);
}
