#include<stdio.h>
#include<string.h>
#define MAXN 1000

int main(void) {
    char input[MAXN];
    int max = -1;
    char output[MAXN];
    while ( gets(input) != NULL) {
        int i = 0;
        while (input[i] != '\n' && input[i] != EOF) {
            i++;
        }
        if (max < i) {
            strcpy(output, input);
        }
    }
    printf("%s\n", output);
    return 0;
}