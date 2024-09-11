#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} date_t;

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        } 
        else
            return 1;
    } 
    else
        return 0;
}

int daysFromStart(int day, int month, int year) {
    int days = day;
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < month - 1; i++)
        days += monthDays[i];
    if (month > 2 && isLeapYear(year))
        days++;
    days += year * 365;
    for (int i = 0; i < year; i++) {
        if (isLeapYear(i))
            days += 1;
    }
    return days;
}

int main() {
    date_t date;
    while(scanf("%d %d %d", &date.day, &date.month, &date.year) == 3)
        printf("%d\n", daysFromStart(19, 9, 2020) - daysFromStart(date.day, date.month, date.year) - 1);
    return 0;
}