#include <stdio.h>

int main() {
    float english, urdu, science, sst, math;
    float aggregate, percentage;
    printf("Enter marks for Subject 1: ");
    scanf("%f", &english);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &urdu);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &science);
    printf("Enter marks for Subject 4: ");
    scanf("%f", &sst);
    printf("Enter marks for Subject 5: ");
    scanf("%f", &math);
    aggregate = english + urdu + science + sst + math;
    percentage = (aggregate / 500) * 100;
    printf("aggregate Marks: %.2f\n", aggregate);
    printf("Percentage Marks: %.2f\n", percentage);
}