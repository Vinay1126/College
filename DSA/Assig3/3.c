#include<stdio.h>
void main()
{
    int n,i,j,s,l=0;
    printf("Enter no. of elements in array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter elements:\n");
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("\nEnter element to search:  ");
    scanf("%d",&s);
    for ( i = 0; i < n; i++)
    {
        if(s==a[i])
        {
            l++;
            printf("\nElement found at %d position.",(i+1));
        }
    }
    if (l==0)
        printf("\nElement not found");
}