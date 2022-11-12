#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *lc, *rc;
} tree;

tree *buildtree(tree *root, int ele)
{
    tree *new = (tree *)malloc(sizeof(tree));
    tree *ptr = root;
    new->data = ele;
    new->lc = new->rc = NULL;
    if (root)
    {
        while (ptr != NULL)
        {
            if (ele > ptr->data)
            {
                if (ptr->rc)
                    ptr = ptr->rc;
                else
                {
                    ptr->rc = new;
                    break;
                }
            }
            else if (ele)
            {
                if (ptr->lc)
                    ptr = ptr->lc;
                else
                {
                    ptr->lc = new;
                    break;
                }
            }
        }
    }
    else
        root = new;
    return root;
}
void display(tree *ptr)
{
    if (ptr->lc)
        display(ptr->lc);

    printf("%3d", ptr->data);

    if (ptr->rc)
        display(ptr->rc);
}
void main()
{
    int ele;
    char ch;
    tree *root = (tree *)malloc(sizeof(tree));
    tree *ptr = (tree *)malloc(sizeof(tree));
    root = NULL;
    do
    {
        printf("Enter the value: ");
        scanf("%d", &ele);
        root = buildtree(root, ele);
        printf("Do you want to enter another element (Y/N): ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');
    printf("\nThe Binary Search Tree is: ");
    display(root);
}