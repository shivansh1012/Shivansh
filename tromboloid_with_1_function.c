//Write a program to find the volume of a tromboloid using one function
#include <stdio.h>

int main() {
    int h,d,b;
    float VolumeOfTromboloid;

    printf("Enter value of h : ");
    scanf("%d", &h);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enter value of d : ");
    scanf("%d", &d);
    VolumeOfTromboloid=((1/3)*((h*d*b)+(d/b)));

    printf("Volume Of Tromboloid : %f\n", VolumeOfTromboloid);

    return 0;
}
