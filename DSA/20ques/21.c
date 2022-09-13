#include <stdio.h>
void main()
{
    int n;
    printf("Enter the length of the 2 arrays ");
    scanf("%d", &n);
    int a[n], b[n], c[n];
    printf("\nEnter the 1st array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the 2nd array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
    }
    printf("\nSum of the 2 arrays are:\n");
    for (int i = 0; i < n; i++)
        printf("%3d", c[i]);
}