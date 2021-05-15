/**
 * @file main.c
 * @author Aryan Chaurasia
 * @brief Calculate & Print Page Size
 * @version 0.1
 * @date 2021-05-14
 */

#include <stdio.h>

int main(){
    // Defining Page Sizes
    int A1_a, A1_b, A2_a, A2_b, A3_a, A3_b, A4_a, A4_b, A5_a, A5_b, A6_a, A6_b, A7_a, A7_b, A8_a, A8_b;

    A1_a = 1189; A1_b = 841;        // A1
    printf("A1 = %d x %d", A1_a, A1_b);
    A2_a = A1_b; A2_b = A1_a / 2;   // A2
    printf("\nA2 = %d x %d", A2_a, A2_b);
    A3_a = A2_b; A3_b = A2_a / 2;   // A3
    printf("\nA3 = %d x %d", A3_a, A3_b);
    A4_a = A3_b; A4_b = A3_a / 2;   // A4
    printf("\nA4 = %d x %d", A4_a, A4_b);
    A5_a = A4_b; A5_b = A4_a / 2;   // A5
    printf("\nA5 = %d x %d", A5_a, A5_b);
    A6_a = A5_b; A6_b = A5_a / 2;   // A6
    printf("\nA6 = %d x %d", A6_a, A6_b);
    A7_a = A6_b; A7_b = A6_a / 2;   // A7
    printf("\nA7 = %d x %d", A7_a, A7_b);
    A8_a = A7_b; A8_b = A7_a / 2;   // A8
    printf("\nA8 = %d x %d", A8_a, A8_b);

    return 0;

}