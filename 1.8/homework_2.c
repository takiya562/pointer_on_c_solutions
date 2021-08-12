#include<stdio.h>

int main(void) {
    int line_num = 1;
    printf("Press Ctrl+D to quit program!\n");
    while (1) {
        char ch = getchar();
        if (ch == EOF) {
            break;
        }
        printf("%d: ", line_num);
        while (ch != EOF) {
            if (ch == '\n') {
                line_num += 1;
                printf("\n");
                break;
            } else {
                printf("%c", ch);
            }
            ch = getchar();
        }
    }
    return 0;
}