#include <stdio.h>
#define PI 3.1416

int main() {
    float length, breadth, radius;
    float rect_area, rect_perimeter;
    float circle_area, circle_circumference;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    rect_area = length * breadth;
    rect_perimeter = 2 * (length + breadth);
    circle_area = PI * radius * radius;
    circle_circumference = 2 * PI * radius;
    printf("\nRectangle Area: %.2f\n", rect_area);
    printf("Rectangle Perimeter: %.2f\n", rect_perimeter);
    printf("Circle Area: %.2f\n", circle_area);
    printf("Circle Circumference: %.2f\n", circle_circumference);

}