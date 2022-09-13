#include<stdio.h>
void main()
{
    int n,i,j,r,c,tot,v=1;
    printf("\nEnter order of the magic matrix(Only odd no.):\n");
    scanf("%d",&n);
    r=c=n;
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for ( j = 0; j < c; j++)
            a[i][j]=0;
    }
    tot=r*c;
    i=0;
    j=c/2;
    a[i][j]=v;
    while(v<tot)
    {
        v++;
        if((i-1)<0 && (j-1)<0)
            i++;
        else if((i-1)<0)
        {
            i=r-1;
            j--;
        }
        else if((j-1)<0)
        {
            j=c-1;
            i--;
        }
        else if(a[i-1][j-1] != 0)
            i++;
        else
        {
            i--;
            j--;
        }
        a[i][j]=v;
    }
    printf("\nThe magic matrix is:\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
            printf("\t%d",a[i][j]);
    }
}
