#include <stdio.h>

void input(int len, int a[len]) {
    for (int i = 0; i < len; i++) {
        printf("Enter the element no %d of the array\n", i + 1);
        scanf("%d", &a[i]);
    }
}

int sum(int len, int a[len]) {
    int total = 0;
    for (int i = 0; i < len; i++) {
        total += a[i];
    }
    return total;
}

int output(int total) {
    printf("The Sum of all the numbers is %d\n", total);
}

int main() {
    int len;
    printf("Enter Total numbers\n");
    scanf("%d", &len);
    int a[len];
    input(len, a);
    output(sum(len, a));
}
