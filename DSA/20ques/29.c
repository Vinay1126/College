#include <stdio.h>

void main()
{
    int m, n, k, i, j;
    printf("Enter no. of row and col of 1st matrix:\n");
    scanf("%d%d", &m, &n);
    printf("\nEnter no. of col of 2nd matrix:\n");
    scanf("%d", &k);
    int a[m][n], b[n][k], c[m][k];
    printf("\nEnter the 1st matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\nEnter 2nd matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
            scanf("%d", &b[i][j]);
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < k; j++)
        {
            c[i][j] = 0;
            for (int l = 0; l < n; l++)
                c[i][j] += a[i][l] * b[l][j];
        }
    }
    printf("\n Multiplication of two matrix is");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < k; j++)
            printf("\t%d", c[i][j]);
    }
}
