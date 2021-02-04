#include <stdio.h>
#include <math.h>

struct coordinates
{
    float x,y;
};
typedef struct coordinates Point;



Point input() {
    Point p;
    printf("Enter x coordinate: ");
    scanf("%f",&p.x);
    printf("Enter y coordinate: ");
    scanf("%f",&p.y);
    return p;
}

float distance(Point A, Point B) { return sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2)); }

void output(Point A, Point B, double d) { printf("The distance between %f,%f and %f,%f is %f\n",A.x,A.y,B.x,B.y,d); }

int main() {
    Point A=input();
    Point B=input();
    float d=distance(A,B);
    output(A,B,d);
    return 0;
}
