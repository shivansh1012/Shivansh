//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int len;

void input(int a[len]) {
    
    for(int i=0;i<len;i++){
        printf("Enter the element no %d of the array\n",i+1);
        scanf("%d",&a[i]);
    }
}

int sum(int a[len]) {
    int total=0;
    for(int i=0;i<len;i++) {
        printf("%d",a[i]);
        total += a[i];
    }
    return total;
}

int output(int total) {
    printf("The Sum of all the numbers is %d\n",total);
}

int main() {
    printf("Enter Total numbers\n");
    scanf("%d",&len);
    int a[len];
    input(a);
    output(sum(a));
}
