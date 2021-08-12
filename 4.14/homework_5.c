#include<stdio.h>
#include<string.h>

#define MAXN 128

char pre[MAXN], cur[MAXN];

int main(void) {
    if (gets(pre) == NULL) {
        return 0;
    }
    int flag = 0;
    while (gets(cur) != NULL) {
        if (strcmp(cur, pre) == 0) {
            flag = 1;
        } else if (flag == 1) {
            printf("%s\n", pre);
            flag = 0;
        }
        strcpy(pre, cur);
    }
    return 0;
}