#include<stdio.h>
#include "negate.h"
#include "increment.h"

extern int increment(int);
extern int negate(int);

int main(void) {
    printf("%d\n", increment(10));
    printf("%d\n", negate(-10));
}