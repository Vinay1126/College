#include <stdio.h>
void main()
{
    int n, fact = 1;
    printf("Enter the no. you want factorial of. ");
    scanf("%d", &n);
    for (; n > 0; n--)
        fact *= n;
    printf("\nThe factorial is %d", fact);
}