#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[32], n, i, bin, deci = 0, base = 1, rem;
    printf("Enter the decimal no. ");
    scanf("%d", &n);
    for (i = 0; n > 0; i++, n /= 2)
        a[i] = n % 2;
    printf("\nBinary of the no. is ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", a[i]);
    printf("\n\nEnter the Binary no.");
    scanf("%d", &bin);
    while (bin > 0)
    {
        rem = bin % 10;
        deci += rem * base;
        bin /= 10;
        base *= 2;
    }
    printf("Decimal of the no. is = %d", deci);
}