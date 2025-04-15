#include <stdio.h>

int main() {
    int d1,d2, side_length ;
    float perimeter, area;

    printf("Enter the length of diagonal 1 of rhombus :");
    scanf("%d",&d1);


    printf("Enter the length of diagonal 2 of rhombus :");
    scanf("%d",&d2);

    printf("Enter the length of side :");
    scanf("%d",&side_length);

    perimeter = 4 * side_length;
    area = 0.5 * (d1 * d2) ;

    printf("Perimeter of Rhombus :%.2f cms \n", perimeter);
    printf("Area of rhombus : %.2f cm sq.\n",area);

    return 0;
}