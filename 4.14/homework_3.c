#include<stdio.h>

int triangle_type(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b || a == c || b == c) {
            if (a == b && b == c) {
                return 1;
            }
            return 2;
        }
        return 3;
    }
    return 0;
}

int main(void) {
    int a;
    int b;
    int c;
    printf("Please input three line of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    int type = triangle_type(a, b, c);
    switch (type)
    {
    case 0:
        printf("not a triangle.\n");
        break;
    case 1:
        printf("Equilateral triangle.\n");
        break;
    case 2:
        printf("Isosceles triangle.\n");
        break;
    case 3:
        printf("common triangle.\n");
        break;
    }
    return 0;
}