reverse of number
#include<stdio.h>
int main(){
    int number, reversed_number;
    int digit1, digit2, digit3, digit4,digit5;
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    digit1 = number % 10;
    digit2  = (number / 10) % 10;
    digit3 = (number / 100) % 10;
    digit4 = (number / 1000) % 10;
    digit5 = (number / 10000) % 10;
    reversed_number = digit1*10000 + digit2*1000 + digit3*100 + digit4*10 + digit5 *1;
    printf("The reversed number is: %d\n", reversed_number);
    return 0;
    
}
