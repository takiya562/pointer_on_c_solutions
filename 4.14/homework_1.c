#include<stdio.h>

double sqrt(int n) {
    double res = 1;
    double pre = 0;
    while (res - pre > 0.001) {
        pre = res;
        res = (res + n / res) / 2.;
    }   
    return res;
}

// int main(void) {
//     int n;
//     printf("Please input a num: ");
//     scanf("%d", &n);
//     printf("%f\n", sqrt(n));
//     return 0;
// }