#include <stdio.h>
void main()
{
    int n, s, i;
    printf("\nEnter the length of the array ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter in the array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the no. you want to search ");
    scanf("%d", &s);
    for (i = 0; i < n; i++)
    {
        if (s == a[i])
        {
            printf("\nNo. found.");
            break;
        }
    }
    if (i == n)
        printf("\nNo. not found.");
}