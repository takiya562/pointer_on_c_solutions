#include<stdio.h>
#include<string.h>

char *find_char(char const *source, char const *chars) {
    char const *p1 = source;
    while (*p1 != '\0') {
        for (char const *p2 = chars; *p2 != '\0'; p2++) {
            if (*p1 == *p2) {
                return (char*)p1;
            }
        }
        p1++;
    }
    return NULL;
}

int main(void) {
    char const *source = "ABCDEF";
    char const *chars = "XACQEF";
    char *res = find_char(source, chars);
    printf("%c\n", *res);
    printf("%c\n", *strpbrk(source, chars));
    return 0;
}