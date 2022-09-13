#include <stdio.h>
#include <stdlib.h>

void insert(int *a, int n)
{
    printf("Enter elements in array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", (a + i));
}
void display(int *a, int n)
{
    printf("\nThe array is:  ");
    for (int i = 0; i < n; i++)
        printf("%3d", *(a + i));
}
void search(int *a, int n)
{
    int s, c = 0;
    printf("\nEnter no. to search: ");
    scanf("%d", &s);
    for (int i = 0; i < n; i++)
    {
        if (s == *(a + i))
        {
            printf("Number found at %d", (i + 1));
            c++;
        }
    }
    if (c == 0)
        printf("\nNumber not found.");
}
void main()
{
    int n;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int *a;
    a = (int *)malloc(n * sizeof(int));
    insert(a, n);
    display(a, n);
    search(a, n);
}