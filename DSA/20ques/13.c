#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the no. ");
    scanf("%d", &n);
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("\nThe sum is %d", sum);
}