#include<stdio.h>

#define MAXN 128

char src[MAXN], dst[MAXN];

int substr(char dst[], char src[], int start, int len) {
    int index = 0;
    while (index < len) {
        if (src[start + index] == '\0') {
            break;
        }
        dst[index++] = src[start + index];
    }
    return index + 1;
}

int main(void) {
    printf("输入初始字符串：");
    scanf("%s", src);
    printf("输入想要截取的起始位置：");
    int start;
    scanf("%d", &start);
    printf("输入想要截取的长度：");
    int len;
    scanf("%d", &len);
    substr(dst, src, start, len);
    printf("截取后的字符串：%s\n", dst);
    return 0;
}