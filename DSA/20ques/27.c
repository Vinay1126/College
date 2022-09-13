#include <stdio.h>
void main()
{
    int n, t;
    printf("Enter the length of the array ");
    scanf("%d", &n);
    int a[n];
    printf("\nENter in the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nAfter bubble sorting the array is:\n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%3d", a[i]);
}