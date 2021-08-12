#include<stdio.h>
#include<string.h>

#define MAXN 1000

void reverse_string(char *string) {
    int n = strlen(string);
    int r = n - 1;
    int l = 0;
    while (l < r) {
        string[n] = string[l];
        string[l++] = string[r];
        string[r--] = string[n];
    }
    string[n] = '\0';
}

int main(void) {
    char string[MAXN];
    printf("Enter a string: ");
    scanf("%s", string);
    reverse_string(string);
    printf("%s\n", string);
    return 0;
}