#include<stdio.h>

void
binary_to_acsii(unsigned int value) {
    if (value == 0) {
        return;
    }
    int mod = value % 10;
    binary_to_acsii(value / 10);
    putchar(mod + '0');
}

long
fibonacci(int n) {
    long result;
    long previous_result;
    long next_older_result;

    result = previous_result = 1;
    while (n-- > 2) {
        next_older_result = previous_result;
        previous_result = result;
        result = previous_result + next_older_result;
    }
    return result;
} 

int main(void) {
    binary_to_acsii(4276);
    long result = fibonacci(20);
    printf("\n");
    printf("%ld\n", result);
    return 0;
}