#include <stdio.h>
void main()
{
    int n, i, max, min, smax, smin;
    printf("\nEnter no. of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = a[0];
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    smax = a[0];
    min = max;
    smin = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            smin = min;
            min = a[i];
        }
        if (a[i] > min && a[i] < smin)
            smin = a[i];
        if (smax < a[i] && a[i] < max)
            smax = a[i];
    }
    printf("\nSecond Smallest no. is: %d\nSecond Largest no. is: %d", smin, smax);
}