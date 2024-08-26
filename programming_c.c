#include <stdio.h>
#include <math.h>

int main () {
    double a = 3.1416, b = 9.8, result;
    result = pow (a , b);
    printf("The result is : %lf \n", result);
    printf("Ceit of result is : %lf \n", ceil(result));
    printf("Floor of result is : %lf \n", floor(result));
    printf("Trunc of resut is : %lf \n", trunc(result));

    
    

    return (0);
}
