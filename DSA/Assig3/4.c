#include <stdio.h>
void main()
{
    int n, i, j, s, l;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                l = a[j];
                a[j] = a[j + 1];
                a[j + 1] = l;
            }
        }
    }
    printf("\nAfter sorting the array:\n");
    for (i = 0; i < n; i++)
        printf("%3d", a[i]);
}