//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>

struct coordinates
{
    float x,y;
}A,B;


void input() {
    printf("Enter x1 coordinate: ");
    scanf("%f",&A.x);
    printf("Enter y1 coordinate: ");
    scanf("%f",&A.y);
    printf("Enter x2 coordinate: ");
    scanf("%f",&B.x);
    printf("Enter y2 coordinate: ");
    scanf("%f",&B.y);
}

float distance() { return sqrt((B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y));}

void output(double d) { printf("The distance between %f,%f and %f,%f is %f\n",A.x,A.y,B.x,B.y,d); }

int main() {
    input();
    output(distance());
    return 0;
}
