void copy_n(char dst[], char src[], int n) {
    for (int i = 0; i < n; i++) {
        if (src[i] == '\0') {
            dst[i] = '\0';
        } else {
            dst[i] = src[i];
        }
    }
}