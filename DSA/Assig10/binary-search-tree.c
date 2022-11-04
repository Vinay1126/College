#include <stdio.h>

typedef struct node
{
    int data;
    struct node *lc, *rc;
} tree;

void buildtree(tree *ptr)
{
    char ch;
    printf("\nDo you want to enter new value(Y/N): ");
    scanf("%d", &ch);
    do
    {
        tree *new = (tree *)malloc(sizeof(tree));
        printf("Enter the value: ");
        scanf("%d", &new->data);
        new->lc = NULL;
        new->rc = NULL;
        if (new->data > ptr->data)
        {
            while (ptr->data < new->data)
                ptr = ptr->rc;
            if (ptr->lc)
            {
                ptr = ptr->lc;
                if (ptr)
                {
                    if (ptr->data < new->data)
                                }
            }
        }
        if (new->data < ptr->data)
        {
            ptr->rc = new;
            new->lc = ptr;
            buildtree(ptr);
        }
        printf("\nDo you want to enter new value(Y/N): ");
        scanf("%d", &ch);
    } while (ch == 'Y' || ch == 'y');
}
void main()
{
    tree *root = (tree *)malloc(sizeof(tree));
    printf("\nEnter the value: ");
    scanf("%d", &root->data);
    tree *ptr = (tree *)malloc(sizeof(tree));
    ptr = root;
    buildtree(ptr);
}