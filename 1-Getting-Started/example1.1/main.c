/**
 * @file main.c
 * @author Aryan Chaurasia
 * @brief Simple Interest Calculation
 * @version 0.1
 * @date 2021-05-14
 */

#include <stdio.h>

int main(){
    /**
     * @brief
     * p = principle value
     * n = time
     * r = rate
     * si = simple interest  
     */
    int p=1000,n=3;     /* Declaration */
    float r=8.5, si;

    // formula of calculation
    si = p * n * r / 100;
    printf( "%f\n", si);
    return 0;
                                                  
}