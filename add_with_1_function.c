#include <stdio.h>

int main() {
    int a1, a2;

    printf("Enter First Number: ");
    scanf("%d", &a1);
    printf("Enter Second Number: ");
    scanf("%d", &a2);

    printf("Sum of %d and %d is %d.", a1, a2, a1+a2);

    return 0;
}
