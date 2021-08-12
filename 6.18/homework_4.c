#include<stdio.h>

#define MAXN 1000

inline int compute_value(int index) {
    return index << 1 | 1;
}

void eratoshenes(char *prime, int n) {
    int start = 1;
    while (start < n) {
        int flag = 0;
        int base = compute_value(start);
        for (int i = start + 1; i < n; i++) {
            if (prime[i]) {
                int cur = compute_value(i);
                if (cur % base == 0) {
                    prime[i] = 0;
                } else if (!flag) {
                    start = i;
                    flag = 1;
                }
            }
        }
        if (!flag) {
            break;
        }
    }
}

int main(void) {
    char prime[MAXN];
    for (int i = 0; i < MAXN; i++) {
        prime[i] = 1;
    }
    eratoshenes(prime, sizeof(prime));
    printf("1\n2\n");
    for (int i = 1; i < MAXN; i++) {
        if (prime[i]) {
            printf("%d\n", compute_value(i));
        }
    }
    return 0;
}