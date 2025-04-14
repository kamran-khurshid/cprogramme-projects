#include <stdio.h>

int main() {
    int num, reversed = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    reversed = (num % 10) * 10000 +
               (num / 10 % 10) * 1000 +
               (num / 100 % 10) * 100 +
               (num / 1000 % 10) * 10 +
               (num / 10000);
    printf("Reversed number: %d\n", reversed);


}