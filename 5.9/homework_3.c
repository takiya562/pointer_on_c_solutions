#include<stdio.h>

unsigned int reverse_bits(unsigned int value) {
    unsigned int res = 0;
    int pos = 32;
    while (pos-- > 0) {
        if ((value & 1) != 0) {
            res |= 1 << pos;
        }
        value >>= 1;
    }
    return res;
}

int main(void) {
    unsigned int value;
    printf("Enter a value: ");
    scanf("%u", &value);
    printf("reverse value: %u\n", reverse_bits(value));
    return 0;
}