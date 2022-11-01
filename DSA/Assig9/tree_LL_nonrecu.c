#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *lc, *rc;
} tree;
int stack[100];
int top = -1;
void push(char x)
{
    top++;
    stack[top] = x;
}
char pop()
{
    char s;
    s = stack[top];
    top--;
    return s;
}

void buildtree(tree *t)
{
    char ch;
    printf("Enter the value: ");
    scanf("%d", &t->data);
    t->lc = NULL;
    t->rc = NULL;
    printf("Do you want to add left child of %d(Y/N)", t->data);
    scanf("%d", &ch);
    if (ch == 'Y')
    {
        tree *new = (tree *)malloc(sizeof(tree));
        t->lc = new;
        buildtree(new);
    }
    printf("Do you want to add right child of %d(Y/N)", t->data);
    scanf("%d", &ch);
    if (ch == 'Y')
    {
        tree *new = (tree *)malloc(sizeof(tree));
        t->rc = new;
        buildtree(new);
    }
}
void inorder(tree *root)
{
    if (root->lc != NULL)
        inorder(root->lc);
    printf("%3d", root->data);
    if (root->rc != NULL)
        inorder(root->rc);
}
void preorder(tree *root)
{
    printf("%3d", root->data);
    if (root->lc != NULL)
        preorder(root->lc);
    if (root->rc != NULL)
        preorder(root->rc);
}
void postorder(tree *root)
{
    if (root->lc != NULL)
        postorder(root->lc);
    if (root->rc != NULL)
        postorder(root->rc);
    printf("%3d", root->data);
}
void main()
{
    tree *root = (tree *)malloc(sizeof(tree));
    buildtree(root);
    printf("\n");
    printf("Inorder:   ");
    inorder(root);
    printf("\n");
    printf("Preorder:  ");
    preorder(root);
    printf("\n");
    printf("Postorder: ");
    postorder(root);
}