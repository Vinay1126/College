#include <stdio.h>
void main()
{
    int n, i, j;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("\nEnter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        b[i]=0;
    for (i = 0; i < n; i++)
    {
        int l = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[i] && l == 0)
            {
                b[i] = a[j];
                l++;
            }
        }
        if(b[i]==0)
            b[i] = -1;
    }
    printf("\nElement\tNGE\n");
    for (i = 0; i < n; i++)
        printf("%d\t%d\n", a[i], b[i]);
}