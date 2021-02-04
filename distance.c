
//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <math.h>
float x11,y11,x22,y22;

void input() {
    printf("Enter x1 coordinate: ");
    scanf("%f",&x11);
    printf("Enter y1 coordinate: ");
    scanf("%f",&y11);
    printf("Enter x2 coordinate: ");
    scanf("%f",&x22);
    printf("Enter y2 coordinate: ");
    scanf("%f",&y22);
}

float distance() { 
    return sqrt((x22-x11)*(x22-x11)+(y22-y11)*(y22-y11));
    }

void output(double d) { printf("The distance between %f,%f and %f,%f is %f\n",x11,y11,x22,y22,d); }

int main() {
    input();
    output(distance());
    return 0;
}
