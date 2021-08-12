#include<stdio.h>
#include<stdarg.h>

int
max_list(int n_values, ...) {
    int max = -1;
    int cur;
    va_list list;
    va_start(list, n_values);
    while ((cur = va_arg(list, int)) >= 0) {
        if (max < cur) {
            max = cur;
        }
    }
    return max;
}

int main(void) {
    printf("%d\n", max_list(5, 6, 7, 4, 8, -1));
    return 0;
}