#include<stdio.h>
#include<string.h>

#define MAXN 1000

int strStr(char *str, char const *substr) {
    int n = strlen(str);
    int m = strlen(substr);
    if (m == 0) {
        return 0;
    }
    int pi[m];
    pi[0] = 0;
    for (int i = 1; i < m; i++) {
        int j = pi[i - 1];
        while (j > 0 && substr[i] != substr[j]) {
            j = pi[j - 1];
        }
        if (substr[i] == substr[j]) {
            j++;
        }
        pi[i] = j;
    }
    for (int i = 0, j = 0; i < n; i++) {
        while (j > 0 && str[i] != substr[j]) {
            j = pi[j - 1];
        }
        if (str[i] == substr[j]) {
            j++;
        }
        if (j == m) {
            return i - m + 1;
        }
    }
    return -1;
}

int del_substr(char *str, char const *substr) {
    int index = strStr(str, substr);
    if (index == -1) {
        return 0;
    }
    int n = strlen(str);
    int m = strlen(substr);
    for (int i = index + m; i <= n; i++) {
        str[index++] = str[i];
    }
    return 1;
}



int main(void) {
    char str[MAXN];
    char const *substr = "CDE";
    printf("Enter a string: ");
    scanf("%s", str);
    if (del_substr(str, substr)) {
        printf("%s\n", str);
    }
    return 0;
}