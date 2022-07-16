#include <stdio.h>
/*WAP to find the area of the circle.
*area of circle A = pi*R*R */
int main() 
{
    float R, A, PI = 3.1416;
    printf("Enter radius of circle : ");
    scanf("%f", &R);
    
    A = PI*R*R;
    printf("Area of circle is %f having the radius %f", A, R);
    
    return 0;
}
