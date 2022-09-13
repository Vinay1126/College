#include <stdio.h>
void main()
{
    int n, i, j, c = 0, s1 = 0, p = 1;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("\nEnter the elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
                c++;
        }
    }
    printf("\nNo. of non zero elements in the square matrix is %d", c);
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
            s1 += a[i][j];
    }
    printf("\n\nSum of the elements above the leading diagonal = %d",s1);
    printf("\n\nElements below the minor diagonal are:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }
    for ( i = 0; i < n; i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                p*=a[i][j];
            if(i+j == n-1 && i != j)
                p*=a[i][j];
        }       
    }
    printf("\nProduct of diagonal elements is = %d",p);
}