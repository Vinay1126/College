#include <stdio.h>
void main()
{
    int n, min, max;
    printf("Enter the length of th array ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter in the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("\nMin value in the array is %d\nMax value in the array is %d", min, max);
}