//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
double h,b,d;
void input() {
    printf("Enter value of h:");
    scanf("%lf",&h);
    printf("Enter value of d:");
    scanf("%lf",&d);
    printf("Enter value of b:");
    scanf("%lf",&b);
}

double VolumeOfTromboloid(double h, double b, double d) { 
    if(b==0) return 0;
    else return ((1/(double)3)*((h*d*b)+(d/b))); 
    }

void output(double Volume) { printf("Volume of Tromboloid %lf\n",Volume); }

int main() {
    input();
    output(VolumeOfTromboloid(h,b,d));
    return 0;
}
