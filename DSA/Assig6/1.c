#include <stdio.h>

void create(int arr[][20], int c, int n)
{
    int i, j, l = 1, t[20][3];
    t[0][0] = n;
    t[0][1] = n;
    t[0][2] = c + 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                t[l][0] = i;
                t[l][1] = j;
                t[l][2] = arr[i][j];
                l++;
            }
        }
    }
    printf("\nThe triplet form of the given sparse matrix is:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%3d", t[i][j]);
        printf("\n");
    }
}
void main()
{
    int arr[20][20], n, c = 0, i, j;
    printf("\nEnter the size of the sparse matrix: ");
    scanf("%d", &n);
    printf("\nEnter the array elements.\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
        if (arr[i][j] != 0)
            c++;
    }
    create(arr, c, n);
}