#include <stdio.h>
#include <math.h>
void main()
{
    int n, c, d, count = 0, sum = 0;
    printf("Enter the no. ");
    scanf("%d", &n);
    c = d = n;
    for (; c > 0; c /= 10, count++)
        ;
    while (d > 0)
    {
        sum += pow(d % 10, count);
        d /= 10;
    }
    if (sum == n)
        printf("\nArmstrong No.");
    else
        printf("\nNot an armstrong No.");
}