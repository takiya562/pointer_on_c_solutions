#include<stdio.h>

int
ascii_to_integer(char *string) {
    char *p = string;
    int res = 0;
    while (*p != '\0') {
        if (*p >= '0' && *p <= '9') {
            res = res * 10 + *p - '0';
        } else {
            return 0;
        }
        p++;
    }
    return res;
}

int main(void) {
    printf("%d\n", ascii_to_integer("12345"));
    printf("%d\n", ascii_to_integer("1234rte2"));
    return 0;
}