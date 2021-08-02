#include <stdio.h>
int main()
{
    int c, d, t;
    printf("Enter the number at location C and D : ");
    scanf("%d %d", &c, &d);

    t = c;
    c = d;
    d = t;
    printf("The interchanged numbers are %d and %d", c, d);
    return 0;
}