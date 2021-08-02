#include <stdio.h>
int main()
{
    int n, digit1, digit2, digit3, digit4, digit5, sum;
    printf("Enter a five- digit number : ");
    scanf("%d", &n);

    digit1 = n%10;
    digit2 = (n/10)%10;
    digit3 = (n/100)%10;
    digit4 = (n/1000)%10;
    digit5 = (n/10000);

    sum = digit1 + digit2 + digit3 + digit4 + digit5;
    printf("%d is the sum of its digit", sum);

    return 0;
}