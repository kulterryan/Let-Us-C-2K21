/**
 * @file main.c
 * @author Aryan Chaurasia
 * @brief Temperature Conversion- Fahrenheit to Celsius
 * @version 0.1
 * @date 2021-05-14
 */

#include <stdio.h>

int main(){
    // Welcome Message
    printf("Temperature Conversion Tool- Fahrenheit to Celsius\n");

    // Initials
    float temp_c, temp_f;
    printf("Enter Temperature of City: ");
    scanf("%f", &temp_f);

    temp_c = (((temp_f - 32) * 5) / 9);
    
    printf("Temperature of City in Celsius is: %.2f", temp_c);
}