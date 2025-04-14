#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    sum = num % 10;
    num = num / 10;
    sum = sum + (num % 10);
    num = num / 10;
    sum = sum + (num % 10);
    num = num / 10;
    sum = sum + (num % 10);
    num = num / 10;
    sum = sum + (num % 10);
    printf("Sum of digits = %d\n", sum);
}