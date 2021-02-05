//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
double h,b,d;
void input() {
    printf("Enter value of h of Tromboloid:");
    scanf("%lf",&h);
    printf("Enter value of d of Tromboloid:");
    scanf("%lf",&d);
    printf("Enter value of b of Tromboloid:");
    scanf("%lf",&b);
}

double VolumeOfTromboloid() { 
    if(b==0) return 0;
    else return ((1/(double)3)*((h*d*b)+(d/b))); 
    }

void output(double Volume) { printf("Volume of Tromboloid %lf\n",Volume); }

int main() {
    input();
    output(VolumeOfTromboloid());
    return 0;
}
