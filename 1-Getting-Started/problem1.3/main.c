/**
 * @file main.c
 * @author Aryan Chaurasia
 * @brief Aggregated Marks & Percentage Calculation
 * @version 0.1
 * @date 2021-05-14
 */

#include <stdio.h>

int main(){
    // Initializing Marks for All Subjects
    // int tm; // tm = total marks
    int m1, m2, m3, m4, m5, am; // am = aggregated marks
    float ap, h=100, tm; // ap = aggregated percentage

    printf("Enter Marks for Each Subject\nTotal Subjects = 5\n(With Space): ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    printf("Enter Total Marks that can be obtained: ");
    scanf("%f", &tm);
    printf("\n%f", tm);

    // Total Marks & Percentage
    am = m1 + m2 + m3 + m4 + m5;
    ap = (am / tm) * h ;

    printf("\nAggregated Marks = %d\n", am);
    printf("\nPercentage Marks = %f\n", ap);
    return 0;

}