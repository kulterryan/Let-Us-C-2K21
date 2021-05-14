/**
 * @file main.c
 * @author Aryan Chaurasia
 * @brief Gross Salary Calculation
 * @version 0.1
 * @date 2021-05-14
 */

#include <stdio.h>

int main(){
    float kr_bs, kr_da, kr_hr, kr_ts;
    // Always Add a Prefix to your Functions to Avoid Conflicts with functions predefined in library.    

    /**
     * kr_bs = Basic Salary
     * kr_da = Dearness Allowance
     * kr_hr = House Rent
     * kr_ts = Total/Gross Salary
     */

    printf("\nEnter Basic Salary: ");
    scanf("%f", &kr_bs);

    kr_da = kr_bs * 0.4; // Calculation for Dearness Allowance
    kr_hr = kr_bs * 0.2; // Calculation for House Rent
    kr_ts = kr_bs + kr_da + kr_hr;
    printf("Basic Salary of Ramesh= %f\n", kr_bs);
    printf("Dearness Allowance Provided = %f\n", kr_da);
    printf("House Rent Allowance Provided = %f\n", kr_hr);
    printf("Total Pay received by Ramesh is %f\n", kr_ts);

    return 0;

}