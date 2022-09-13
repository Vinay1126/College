#include <stdio.h>
int main()
{
    int n,t;
    printf("Enter any number: ");
    scanf("%d", &n);
    t=n;
    if ((t>>1)<<1==n)
        printf("%d is even.", n);
    else
        printf("%d is odd.", n);
    return 0;
}
