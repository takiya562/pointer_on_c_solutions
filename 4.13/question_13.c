#include<stdio.h>

int main(void) {
    int which_word;
    printf("Please input your word: ");
    scanf("%d", &which_word);
    switch (which_word)
    {
    case 1:
        printf("who\n");
        break;
    case 2:
        printf("what\n");
        break;
    default:
        printf("don't know\n");
        break;
    }
    return 0;
}