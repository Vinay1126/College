#include <stdio.h>
void main()
{
    int n, rev = 0;
    printf("Enter the no. ");
    scanf("%d", &n);
    while (n > 0)
    {
        rev = (rev * 10) + n % 10;
        n /= 10;
    }
    printf("\nReverse of the no. is %d", rev);
}