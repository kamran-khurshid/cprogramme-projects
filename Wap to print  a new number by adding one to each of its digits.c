#include <stdio.h>
int main() {
    int num, digit1, digit2, digit3, digit4, digit5;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    digit1 = num / 10000;
    digit2 = (num / 1000) % 10;
    digit3 = (num / 100) % 10;
    digit4 = (num / 10) % 10;
    digit5 = num % 10;
    printf("%d%d%d%d%d\n", (digit1 + 1) % 10, (digit2 + 1) % 10, (digit3 + 1) % 10, (digit4 + 1) % 10, (digit5 + 1) % 10);
}