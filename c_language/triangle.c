#include <stdio.h>

int main () 
{
    int base, height;
    float area; 
    printf("Enter Base of triangle : ");
    scanf("%d", &base);

    printf("Enter Height of triangle : ");
    scanf("%d", &height);

    area = 0.5 * base * height;

    printf("Area of triangle : %.2f \n", area);
    return 0;
}
