#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if((n^1)==(n+1))
        printf("%d is even.", n);
    else
        printf("%d is odd.", n);
    return 0;
}

