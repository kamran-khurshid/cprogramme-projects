#include <stdio.h>
#include <math.h>

int main() {
    int side , perimeter;
    float area ;

    printf("Enter the side length of the regular hexagon: ");
    scanf("%d",&side);

    perimeter = 6 * side;
    area = (3 * sqrt(3) / 2) * side * side;

    printf("Perimeter of Hexagon: %d cm\n", perimeter);
    printf("Area of Hexagon: %.2f cm²\n", area);

    return 0;
}
