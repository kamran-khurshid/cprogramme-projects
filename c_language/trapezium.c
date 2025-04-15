#include <stdio.h>

int main() {
    int side1, side2, side3 , side4, height ;
    float perimeter , area ;

    printf("Enter the length of side 1 :");
    scanf("%d",&side1);

    printf("Enter the length of side 2 :");
    scanf("%d",&side2);

    printf("Enter the length of side 3 :");
    scanf("%d",&side3);

    printf("Enter the length of side 4 :");
    scanf("%d",&side4);

    printf("Enter the height of trapezium :");
    scanf("%d",&height);

    perimeter = side1 + side2 + side3 + side4;
    area = 0.5 * (side1 + side2) * height;

    printf("Perimeter: %.2f cm\nArea: %.2f cm²\n",perimeter,area);
    return 0;
}