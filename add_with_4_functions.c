//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int input() {
    int a; 
    printf("Enter a number\n");
    scanf("%d",&a);
    return a;
}

int find_sum(int a, int b) { return a+b; }

void output(int a1, int a2, int sum) { printf("Sum of %d + %d is %d\n",a1,a2,sum); }

int main() {
    int a1=input();
    int a2=input();
    sum=find_sum(x,y);
    output(x,y,z);
    return 0;
}
