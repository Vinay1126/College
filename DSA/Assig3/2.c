#include<stdio.h>
void main()
{
    int n,i,t;
    printf("Enter no. of elements in array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter elements in array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
    printf("\nAfter reversing the array is:\n");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
}