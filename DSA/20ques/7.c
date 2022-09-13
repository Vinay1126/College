#include <stdio.h>
void main()
{
    int n, even = 0, odd = 0;
    printf("\nEnter the last term ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            even += i;
        else
            odd += i;
    }
    printf("\nSum of Even no.s are %d\nSum of Odd no.s are %d", even, odd);
}