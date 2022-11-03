#include <stdio.h>

void buildtree(int t[], int index, int item)
{
    t[index] = item;
    int ch, data;
    printf("Do you want to enter left child of %d(1/0): ", item);
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("Enter left child of %d: ", item);
        scanf("%d", &data);
        buildtree(t, 2 * index + 1, data);
    }
    printf("Do you want to enter right child of %d(1/0): ", item);
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("Enter right child of %d: ", item);
        scanf("%d", &data);
        buildtree(t, 2 * index + 2, data);
    }
}
void main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int t[n], data;
    printf("Enter root node data ");
    scanf("%d", &data);
    for (int i = 0; i < n; i++)
        t[i] = -1;
    buildtree(t, 0, data);
    for (int i = 0; i < n; i++)
    {
        if (t[i] == -1)
            printf("_");
        else
            printf("%3d", t[i]);
    }
}