#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, theta;
    printf("Cartesian co-ordinates are (x, y) : ");
    scanf("%f, %f", &x, &y);

    r = sqrt(x*x + y*y);
    theta = atan(y/x);
    printf("The polar co-ordinates of (%f, %f) is (%f, %f)", x, y, r, theta);
    return 0;
}