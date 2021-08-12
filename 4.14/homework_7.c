#include<stdio.h>

#define MAXN 128

char string[MAXN];

void deblank(char string[]) {
    if (string[0] == '\0') {
        return;
    }
    int i = 1;
    int next = 1;
    while (string[i] != '\0') {
        string[next] = string[i++];
        if (string[next] != ' ' || string[next - 1] != ' ') {
            next++;
        }
    }
    string[next] = '\0';
}

int main(void) {
    printf("输入一个字符串：");
    gets(string);
    deblank(string);
    printf("%s\n", string);
    return 0;
}