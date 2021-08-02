#include <stdio.h>
#include <math.h>
int main()
{
    float deg, radian;
    const float pi = 3.14159;
    printf("Enter the angle in degree : ");
    scanf("%f", &deg);

    radian = deg * (pi/180.0); 
    printf("sin(%f) = %f", deg, sin(radian));
    printf("cos(%f) = %f", deg, sin(radian));
    printf("tan(%f) = %f", deg, sin(radian));
    return 0;
}