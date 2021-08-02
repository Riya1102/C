#include <stdio.h>
#include <math.h>
int main()
{
    float L1, L2, G1, G2, D;
    const float pi = 3.141592;
    printf("The values of latitude are (L1, L2) : ");
    scanf("%f, %f", &L1, &L2);
    printf("The values of longitude are (G1, G2) : ");
    scanf("%f, %f", &G1, &G2);

    L1 = L1*(pi/180.0);
    L2 = L2*(pi/180.0);
    G1 = G2*(pi/180.0);
    G2 = G2*(pi/180.0);
    D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));
    printf("Distance in nautical miles is %f", D);
    return 0;
}