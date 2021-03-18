#include<stdio.h>
#include<math.h>
typedef struct rectangleVertices {
    float x1,y1;
    float x2,y2;
    float x3,y3;
    float area;

}Rectangle;

Rectangle input_one_rectangle() {
    Rectangle tempRectangle;
scanf("%f%f%f%f%f%f",&tempRectangle.x1,&tempRectangle.y1,&tempRectangle.x2,&tempRectangle.y2,&tempRectangle.x3,&tempRectangle.y3);
    return tempRectangle;
}

void input_n_rectangles(int totalRectangles, Rectangle rectangle[totalRectangles]) {
    for(int i=0;i< totalRectangles;i++) {
        rectangle[i]=input_one_rectangle();
    }
}


float compute_distance(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
float compute_area(float l, float b) {
    return l*b;
}

void compute_one_rectangle(Rectangle *rectangle) {
    float l=compute_distance(rectangle->x1,rectangle->y1,rectangle->x2,rectangle->y2);
    float b=compute_distance(rectangle->x1,rectangle->y1,rectangle->x3,rectangle->y3);
    float h=compute_distance(rectangle->x2,rectangle->y2,rectangle->x3,rectangle->y3);

    if (l>b && l>h) {
        rectangle->area=compute_area(b,h);
    }
    else if ( b>l && b>h) {
        rectangle->area=compute_area(l,h);
    }
    else {
        rectangle->area=compute_area(l,b);
    }    
}

void compute_n_rectangles(int totalRectangles, Rectangle rectangle[totalRectangles]) {
    for(int i=0;i< totalRectangles;i++) {
        compute_one_rectangle(&rectangle[i]);
    }
}

void print_one_rectangle(Rectangle rectangle) {
    printf("Area of rectangle with vertices (%.1f,%.1f), (%.1f,%.1f), (%.1f,%.1f) is %.1f\n", rectangle.x1,rectangle.y1,rectangle.x2,rectangle.y2,rectangle.x3,rectangle.y3,rectangle.area);
}

void print_n_rectangles(int totalRectangles, Rectangle rectangle[totalRectangles]){
    for(int i=0;i< totalRectangles;i++) {
        print_one_rectangle(rectangle[i]);
    }
}


int main() {
    int totalRectangles;
    scanf("%d",&totalRectangles);
    Rectangle rectangles[totalRectangles];
    input_n_rectangles(totalRectangles, rectangles);
    compute_n_rectangles(totalRectangles, rectangles);
    print_n_rectangles(totalRectangles, rectangles);

    return 0;
}
