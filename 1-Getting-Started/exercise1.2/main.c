/**
 * @file main.c
 * @author Aryan Chaurasia
 * @brief Area Calculation
 * @version 0.1
 * @date 2021-05-14
 */

#include <stdio.h>

int main(){
    // Area of Rectangle
    float rec_len, rec_brdt;
    printf("Enter Length, Breadth of Rectangle:\n");
    scanf("%f %f", &rec_len, &rec_brdt);

    float rec_area;
    rec_area = rec_len * rec_brdt;
    printf("Area of Rectangle= %.2f\n", rec_area);

    // Perimeter of Rectangle
    float rec_per;
    rec_per = 2*(rec_len + rec_brdt);
    printf("Perimeter of Rectangle = %.2f\n", rec_per);
    
    // Area of Circle
    float cir_rad, cir_area, cir_cirf;
    printf("Enter Radius of Circle:\n");
    scanf("%f", &cir_rad);
    
    cir_area = 22 / 7 * (cir_rad) * cir_rad;
    cir_cirf = 2 * 22 / 7 * cir_rad;

    printf("Area of Circle= %.2f\n", cir_area);
    printf("Circumference of Circle = %.2f\n", cir_cirf);

    return 0;

}