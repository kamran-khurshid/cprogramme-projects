#include <stdio.h>

int main() {
    float distance_km;
    float distance_meters, distance_feet, distance_inches, distance_cm;
    printf("Enter distance between two cities (in kilometers): ");
    scanf("%f", &distance_km);
    distance_meters = distance_km * 1000;
    distance_feet = distance_km * 3280.84;
    distance_inches = distance_km * 39370.1;
    distance_cm = distance_km * 100000;
    printf("Distance in meters: %.2f\n", distance_meters);
    printf("Distance in feet: %.2f\n", distance_feet);
    printf("Distance in inches: %.2f\n", distance_inches);
    printf("Distance in centimeters: %.2f\n", distance_cm);
}