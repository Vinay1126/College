#include<stdio.h>
void main()
{
    int n,i,j,b,c,s1,s2,l=0;
    printf("Enter no. of elements in array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter elements:\n");
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("\nEnter the 2 no.s: ");
    scanf("%d%d",&b,&c);
    for(i=0;i<n;i++)
    {
        if(b==a[i] && l==0)
        {
            s1=i;
            l++;
        }
        if(c==a[i])
            s2=i;
    }
    printf("\nYour no.s are:\n");
    for ( i = 0; i < n; i++)
    {
        if(i>=s1 && i<= s2)
            printf("%3d",a[i]);
    }
    
}