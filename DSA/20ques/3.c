#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the no. upto which you want sum of ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("\nThe sum is %d", sum);
}