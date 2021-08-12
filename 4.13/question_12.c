#include<stdio.h>

int is_leap(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;
            } else {
                return 0;
            }
        }
    }
    return 0;
}

int main(void) {
    int year;

    printf("Please input a year: ");
    scanf("%d", &year);
    if (is_leap(year)) {
        printf("%d is leap year.\n", year);
    } else {
        printf("%d is not leap year.\n", year);
    }
    return 0;
}