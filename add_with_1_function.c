//Write a program to add two user input numbers using one function.
#include <stdio.h>

int sumOfNumbers(int a1, int a2) {
    return a1+a2;
}

int main() {
    int a1, a2, sum;

    printf("Enter Number: ");
    scanf("%d", &a1);
    printf("Enter Number: ");
    scanf("%d", &a2);

    sum = sumOfNumbers(a1, a2);

    printf("Sum of %d and %d is %d.", a1, a2, sum);

    return 0;
}
