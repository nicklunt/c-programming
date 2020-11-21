#include <stdio.h>

int main(int argc, char *argv[]) {
    int x, y;

    printf("Max of 2 integers..\nEnter 1st number: > ");
    scanf("%d", &x);
    printf("Enter 2nd number: > ");
    scanf("%d", &y);

    int max = x > y ? x : y;

    printf("Max of %d and %d is %d\n", x, y, max);
}