#include<stdio.h>

int main(void) {
    signed char check_sum = -1;
    signed char ch;
    printf("Press Ctrl+D to quit program!\n");
    while ((ch = getchar()) != '\n') {
        printf("%c", ch);
        check_sum += ch;
    }
    check_sum += ch;
    printf("\n%d\n", check_sum);
    return 0;
}