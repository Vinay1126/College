#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *leftChild, *rightChild;
};
typedef struct node Tree;
Tree *stack[100];
int top = -1;

void buildTree(Tree *ptr)
{
    char ch;
    printf("Enter data: ");
    scanf("%d", &ptr->data);

    printf("Do you want to enter left child of %d (Y/N): ", ptr->data);
    scanf(" %c", &ch);
    if (ch == 'y' || ch == 'Y')
    {
        Tree *new = (Tree *)malloc(sizeof(Tree));
        ptr->leftChild = new;
        new->leftChild = new->rightChild = NULL;
        buildTree(new);
    }

    printf("Do you want to enter right child of %d (Y/N): ", ptr->data);
    scanf(" %c", &ch);
    if (ch == 'y' || ch == 'Y')
    {
        Tree *new = (Tree *)malloc(sizeof(Tree));
        ptr->rightChild = new;
        new->leftChild = new->rightChild = NULL;
        buildTree(new);
    }
}

void rec_inorder(Tree *ptr)
{
    if (ptr->leftChild)
        rec_inorder(ptr->leftChild);

    printf("%d ", ptr->data);

    if (ptr->rightChild)
        rec_inorder(ptr->rightChild);
}

void rec_preorder(Tree *ptr)
{
    printf("%d ", ptr->data);

    if (ptr->leftChild)
        rec_preorder(ptr->leftChild);

    if (ptr->rightChild)
        rec_preorder(ptr->rightChild);
}

void rec_postorder(Tree *ptr)
{
    if (ptr->leftChild)
        rec_postorder(ptr->leftChild);

    if (ptr->rightChild)
        rec_postorder(ptr->rightChild);

    printf("%d ", ptr->data);
}

void push(Tree *ptr)
{
    stack[++top] = ptr;
}

Tree *pop()
{
    return stack[top--];
}

void nonrec_inorder(Tree *Root)
{
    top = -1;
    Tree *ptr = Root;
    while (1)
    {
        if (ptr)
        {
            push(ptr);
            ptr = ptr->leftChild;
        }

        else
        {
            if (top != -1)
            {
                ptr = pop();
                printf("%d ", ptr->data);
                ptr = ptr->rightChild;
            }
        }
    }
}

void nonrec_preorder(Tree *Root)
{
    top = -1;
    Tree *ptr = Root;
    while (1)
    {
        printf("%d ", ptr->data);

        if (ptr->rightChild)
            push(ptr->rightChild);

        if (ptr->leftChild)
            ptr = ptr->leftChild;

        else
        {
            ptr = pop();
            if (top == -1 && ptr->leftChild == NULL && ptr->rightChild == NULL)
            {
                printf("%d", ptr->data);
                return;
            }
        }
    }
}

void nonrec_postorder(Tree *Root)
{
    top = -1;
    Tree *ptr = Root;
    do
    {
        while (ptr)
        {
            if (ptr->rightChild)
                push(ptr->rightChild);
            push(ptr);
            ptr = ptr->leftChild;
        }

        ptr = pop();
        if (ptr->rightChild && stack[top] == ptr->rightChild)
        {
            pop();
            push(ptr);
            ptr = ptr->rightChild;
        }

        else
        {
            printf("%d ", ptr->data);
            ptr = NULL;
        }
    } while (top != -1);
}

void main()
{

    Tree *Root = (Tree *)malloc(sizeof(Tree));
    buildTree(Root);
    printf("\nRecrsive Traversal.\n");
    printf("\nIn order: ");
    rec_inorder(Root);
    printf("\nPre Order: ");
    rec_preorder(Root);
    printf("\nPost Order: ");
    rec_postorder(Root);
    printf("\nNon-Recrsive Traversal.\n");
    printf("\nIn order: ");
    nonrec_inorder(Root);
    printf("\nPre Order: ");
    nonrec_preorder(Root);
    printf("\nPost Order: ");
    nonrec_postorder(Root);
}
