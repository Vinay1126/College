#include<stdio.h>
void main()
{
    int n,i,max,min;
    printf("\nEnter no. of elements in array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the array:\n");
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    min = a[0];
    max = a[0];
    for ( i = 1; i < n; i++)
    {
        if(min>a[i])
            min = a[i];
        if (max<a[i])
            max = a[i];
    }
    printf("\nSmallest no. is: %d\nLargest no. is: %d",min,max);
}