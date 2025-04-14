#include <stdio.h>
int main() {
    int num, first, last, sum;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    last = num % 10;
    first = num / 1000;
    sum = first + last;
    printf("Sum = %d", sum);
}