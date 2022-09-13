#include <stdio.h>
void main()
{
    int n, i, j, m, l = 0;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("\nEnter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            l++;
    }
    for (i = 0; i < n; i++)
        b[i] = 0;

    for (m = 0, i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[m] = a[i];
            m++;
        }
            
        else
        {
            b[l] = a[i];
            l++;
        }
    }
    printf("\nThe new array is:\n");
    for (i = 0; i < n; i++)
        printf("%3d", b[i]);
}
