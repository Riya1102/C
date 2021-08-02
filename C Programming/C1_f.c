#include <stdio.h>
int main()
{
    int i, l = 1189, w = 841, x;
    printf("Enter the value of i: ");
    scanf("%d", &i);
    for(i = 0; i<9; i++) 
    {
        printf("A%d: %d*%d", i, l, w);
        x = l;
        l = w;
        w = x/2;
    }
    return 0;
}