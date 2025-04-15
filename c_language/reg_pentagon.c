#include <stdio.h>

int main() {
    int side;
    float perimeter, area;

    printf("Enter the length of side of the regular pentagon: ");
    scanf("%d", &side);

    perimeter = 5 * side;
    area = 1.72 * side * side;
    
    printf("Perimeter of Pentagon: %.2f cm\n", perimeter);
    printf("Area of Pentagon: %.2f cm²\n", area);

    return 0;
}
