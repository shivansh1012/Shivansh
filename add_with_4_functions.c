#include <stdio.h>

int getInput(char s[20]) {
    int tempVal;
    printf("Enter %s number : ", s);
    scanf("%d", &tempVal);
    return tempVal;
}

int find_sum(int a, int b) {
    return a + b;
}

void output(int a1, int a2, int sum) {
    printf("Sum of %d + %d is %d\n", a1, a2, sum);
}

int main() {
    int a1 = getInput("first");
    int a2 = getInput("second");
    int sum = find_sum(a1, a2);
    output(a1, a2, sum);
    return 0;
}
