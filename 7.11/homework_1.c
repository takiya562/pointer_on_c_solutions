#include<stdio.h>

int
hermite(int n, int x) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 2 * x;
    }
    return hermite(n - 1, x) * 2 * x - hermite(n - 2, x) * 2 * (n - 1);
}

int main(void) {
    printf("%d\n", hermite(3, 2));
}