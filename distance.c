#include <stdio.h>
#include <math.h>

float getInput(char s[20]) {
    float tempVal;
    printf("Enter %s coordinate : ", s);
    scanf("%f", &tempVal);
    return tempVal;
}

float distance(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void output(float x1, float y1, float x2, float y2, double d) {
    printf("The distance between %f,%f and %f,%f is %f\n", x1, y1, x2, y2, d);
}

int main() {
    float x1, y1, x2, y2, dis;
    x1 = getInput("x1");
    y1 = getInput("y1");
    x2 = getInput("x2");
    y2 = getInput("y2");
    dis = distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, dis);
    return 0;
}
