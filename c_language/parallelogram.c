#include <stdio.h>

int main() {
    int side ,base ,height ,area ,perimeter ;

    printf("Enter side of parallelogram ");
    scanf("%d",&side);

    printf("Enter Base of parallelogram :");
    scanf("%d",&base);

    printf("Enter height of parallelogram :");
    scanf("%d",&height);

    area = base * height ;
    perimeter = 2 * (base + side);

    printf("Area of Parallelogram : %d \n", area);
    printf("Perimeter of Parallelogram : %d", perimeter);

    return 0;
} 