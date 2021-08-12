#include<stdio.h>

extern double sqrt(int);

int is_prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        } 
    }
    return 1;
}

int main(void) {
    for (int i = 0; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}