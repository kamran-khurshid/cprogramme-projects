#include <stdio.h>

int main() {
    int radius,area,perimeter ;

    printf("Enter radius of circle :");
    scanf("%d",&radius);

    area = 3.14 * (radius * radius);
    perimeter = 2 * 3.14 * (radius);

    printf("Area of square : %d \n", area);
    printf("Perimeter of square : %d", perimeter);

    return 0;
} 