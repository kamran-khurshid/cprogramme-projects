#include <stdio.h>
int main() {
    int amount, hundreds, fifties, tens;
    printf("Enter amount to withdraw (in rupees): ");
    scanf("%d", &amount);
    hundreds = amount / 100;
    amount = amount % 100;
    fifties = amount / 50;
    amount = amount % 50;
    tens = amount / 10;
    printf("100s = %d\n", hundreds);
    printf("50s = %d\n", fifties);
    printf("10s = %d\n", tens);
}