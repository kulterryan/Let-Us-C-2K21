/**
 * @file main.c
 * @author Aryan Chaurasia
 * @brief Distance Conversion
 * @version 0.1
 * @date 2021-05-14
 */

#include <stdio.h>

int main(){
    float dist_km, dist_m, dist_cm, dist_ft, dist_inch;
    // Always Add a Prefix to your Functions to Avoid Conflicts with functions predefined in library..

    printf("\nEnter the distance in Kilometers: ");
    scanf("%f", &dist_km);

    // Conversion Calculation
    printf("Distance in Meters = %f\n", dist_m = dist_km * 1000);
    printf("Distance in Centimeters = %f\n", dist_cm = dist_m * 100);
    printf("Distance in Inches = %f\n", dist_inch = dist_cm / 2.54);
    printf("Distance in Fts. = %f\n", dist_ft = dist_inch / 12);

    // Advice
    // To Avoid Repetation of variables, we can also use them inside printf() function as a dependancy.
    // To Know More visit: https://www.geeksforgeeks.org/return-values-of-printf-and-scanf-in-c-cpp/

    return 0;
}