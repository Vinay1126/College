#include <stdio.h>
void main()
{
    int n, a = 0, b = 1, new = a + b;
    printf("\nHow many terms?\n");
    scanf("%d", &n);
    printf("\nThe fibonacci series is:\n%3d%3d", a, b);
    for (int i = 0; i < n; i++)
    {
        printf("%3d", new);
        a = b;
        b = new;
        new = a + b;
    }
}