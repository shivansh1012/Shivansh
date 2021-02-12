#include <stdio.h>

double getInput(char s[20]) {
    double tempVal;
    printf("Enter %s of tromboliod : ", s);
    scanf("%lf", &tempVal);
    return tempVal;
}

double VolumeOfTromboloid(int h, int b, int d) {
    if (b == 0)
        return 0;
    else
        return ((1 / (double)3) * ((h * d * b) + (d / b)));
}

void output(double Volume) {
    printf("Volume of Tromboloid %lf\n", Volume);
}

int main() {
    double h, b, d, Volume;
    h=getInput("height");
    b=getInput("breadth");
    d=getInput("depth");
    Volume=VolumeOfTromboloid(h,b,d);
    output(Volume);
    return 0;
}
