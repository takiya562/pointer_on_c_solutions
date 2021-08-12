#include<stdio.h>

int 
gcd(int m, int n) {
    while (m % n != 0) {
        int tmp = m % n;
        m = n;
        n = tmp;
    }
    return n;
}

int main(void) {
    printf("%d\n", gcd(2, 3));
    printf("%d\n", gcd(100, 15));
    return 0;
}