#include<stdio.h>

int main(void) {
    int ch;
    while ((ch = getchar()) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch += 32;
        }
        printf("%c", ch);
    }
    printf("You have exited!\n");
    return 0;
}