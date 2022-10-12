#include <stdio.h>

void add(int t[][3], int p[][3], int n)
{
    int i = 1, j = 1, l = 1, k[20][3];
    k[0][0] = n;
    k[0][1] = n;
    int r = t[0][2], s = p[0][2];
    while (i <= r && j <= s)
    {
        if (t[i][0] == p[j][0])
        {
            if (t[i][1] == p[j][1])
            {
                k[l][0] = t[i][0];
                k[l][1] = p[i][1];
                k[l][2] = p[i][2] + t[i][2];
                i++;
                j++;
                l++;
            }
            else
            {
                if (t[i][1] > p[j][1])
                {
                    k[l][0] = p[j][0];
                    k[l][1] = p[j][1];
                    k[l][2] = p[j][2];
                    j++;
                    l++;
                }
                else
                {
                    k[l][0] = t[i][0];
                    k[l][1] = t[i][1];
                    k[l][2] = t[i][2];
                    i++;
                    l++;
                }
            }
        }
        else
        {
            if (t[i][0] > p[j][0])
            {
                k[l][0] = p[j][0];
                k[l][1] = p[j][1];
                k[l][2] = p[j][2];
                j++;
                l++;
            }
            else
            {
                k[l][0] = t[i][0];
                k[l][1] = t[i][1];
                k[l][2] = t[i][2];
                i++;
                l++;
            }
        }
    }
    while (i <= r && j >= s)
    {
        k[l][0] = t[i][0];
        k[l][1] = t[i][1];
        k[l][2] = t[i][2];
        i++;
        l++;
    }
    while (j <= s && i >= r)
    {
        k[l][0] = p[j][0];
        k[l][1] = p[j][1];
        k[l][2] = p[j][2];
        j++;
        l++;
    }
    k[0][2] = l;
    printf("\nThe addition of the 2 sparse matrix is:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%3d", k[i][j]);
        printf("\n");
    }
}
void create(int arr1[][20], int arr2[][20], int c, int d, int n)
{
    int i, j, l = 1, m = 1, t[20][3], p[20][3];
    t[0][0] = n;
    t[0][1] = n;
    t[0][2] = c;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr1[i][j] != 0)
            {
                t[l][0] = i;
                t[l][1] = j;
                t[l][2] = arr1[i][j];
                l++;
            }
        }
    }
    p[0][0] = n;
    p[0][1] = n;
    p[0][2] = d + 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr2[i][j] != 0)
            {
                p[m][0] = i;
                p[m][1] = j;
                p[m][2] = arr2[i][j];
                m++;
            }
        }
    }
    add(t, p, n);
}
void main()
{
    int arr1[20][20], arr2[20][20], n, c = 0, d = 0, i, j;
    printf("\nEnter the size of the 2 sparse matrix: ");
    scanf("%d", &n);
    printf("\nEnter the 1st array elements.\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &arr1[i][j]);
        if (arr1[i][j] != 0)
            c++;
    }
    printf("\nEnter the 2nd array elements.\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &arr2[i][j]);
        if (arr2[i][j] != 0)
            d++;
    }
    create(arr1, arr2, c + 1, d, n);
}