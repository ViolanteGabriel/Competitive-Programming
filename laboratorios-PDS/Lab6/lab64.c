#include <stdio.h>

int isLeapYear(int year){
    if (year % 4 == 0 && year % 100 != 0)
        return 1;
    else if (year % 4 == 0 && year % 400 == 0)
        return 1;
    else
        return 0;
}

int main(int argc, char const *argv[]){
    int year;
    while(scanf("%d", &year) == 1)
        printf("%d\n", isLeapYear(year));
    return 0;
}
