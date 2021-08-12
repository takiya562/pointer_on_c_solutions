#include<stdio.h>

int main(void) {
    int ch;
    while ((ch = getchar()) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            ch += 13;
        }
        printf("%c", ch);
    }
    printf("You have exited!\n");
    return 0;
}