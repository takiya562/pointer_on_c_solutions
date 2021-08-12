#include<stdarg.h>
#include<stdio.h>

float
average(int n_values, ...) {
    va_list var_arg;
    int count;
    float sum = 0;
    
    va_start(var_arg, n_values);
    for (count = 0; count < n_values; count++) {
        sum += va_arg(var_arg, int);
    }
    return sum / n_values;
}

int main(void) {
    printf("%f\n", average(5, 1, 2, 3, 4, 5));
    return 0;
}