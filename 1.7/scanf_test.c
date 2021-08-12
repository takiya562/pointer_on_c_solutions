#include<stdio.h>
#define MAX_LEN 10

int main(void) {
    int quantity, price;
    char department[MAX_LEN];
    scanf("%d%d%s", &quantity, &price, department);
    printf("%d %d %s\n", quantity, price, department);
    return 0;
}