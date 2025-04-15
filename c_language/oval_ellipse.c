#include <stdio.h>
#include <math.h>

#define PI 3.14
int main() {
    int major , minor ;
    float perimeter , area ;

    printf("Enter the length of major axis :");
    scanf("%d",&major);

    printf("Enter the length of minor axis :");
    scanf("%d",&minor);

    perimeter = PI * (3*(major+minor) - sqrt((3*major + minor)*(major + 3*minor)));
    area = PI * major * minor ;

    printf("Area of Oval : %.2f cm U+00B2\n", area);
    printf("Perimeter of Oval : %.2f cm\n", perimeter);

    return 0;
}