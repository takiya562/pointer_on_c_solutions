void set_bit(char bit_array[], unsigned bit_number) {
    bit_array[bit_number] |= 1 << bit_number;
}

void clear_bit(char bit_array[], unsigned bit_number) {
    bit_array[bit_number] &= ~ (1 << bit_number);
}

void assign_bit(char bit_array[], unsigned bit_number, int value) {
    if (value == 0) {
        clear_bit(bit_array, bit_number);
    } else {
        set_bit(bit_array, bit_number);
    }
}

int test_bit(char bit_array[], unsigned bit_number) {
    return bit_array[bit_number];
}