#include <stdio.h>
void main()
{
    int n, count = 0;
    printf("Enter the no. to check ");
    scanf("%d", &n);
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count > 0)
        printf("\nNot a prime no.");
    else
        printf("\nPrime No.");
}