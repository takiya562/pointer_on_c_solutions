#include<stdio.h>

int store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit) {
    unsigned len = starting_bit - ending_bit + 1;
    unsigned mask = (1 << len) - 1 << ending_bit;
    original_value &= ~mask;
    value_to_store <<= ending_bit;
    value_to_store &= mask;
    original_value |= value_to_store;
    return original_value;
}

int main(void) {
    printf("%x\n", store_bit_field(0xffff, 0x123, 13, 9));
    return 0;
}