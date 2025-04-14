#include <stdio.h>
int main() {
    float total_sp, total_profit, total_cp, cp_one;
    printf("Enter total selling price of 15 items: ");
    scanf("%f", &total_sp);
    printf("Enter total profit on 15 items: ");
    scanf("%f", &total_profit);
    total_cp = total_sp - total_profit;
    cp_one = total_cp / 15;
    printf("Cost price of one item: %.2f\n", cp_one);
}