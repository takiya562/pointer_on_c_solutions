#include<stdio.h>

int main(void) {
    long a = 0xffffffffL;
    short b = a;
    printf("%ld\n", a);
    printf("%d\n", b);
}