#include <stdio.h>
int main() {
    int C, D, temp;
    printf("Enter two numbers:\n");
    scanf("%d%d", &C, &D);
    temp = C;
    C = D;
    D = temp;
    printf("After swapping:\n");
    printf("C = %d\n", C);
    printf("D = %d\n", D);
}