#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} LL;
LL *top, *rear;
void cqinsert()
{
    LL *new;
    new = (LL *)malloc(sizeof(LL *));
    new->next = NULL;

    printf("\nEnter no. you want to insert: ");
    scanf("%d", &new->data);
    if (top == NULL)
        top = new;
    else
        rear->next = new;
    rear = new;
    printf("\nNo. inserted.\n");
}
void cqdel()
{
    if (top == NULL)
    {
        printf("\nUnderflow\n");
        return;
    }
    LL *t;
    t = top;
    top = top->next;
    printf("\n%d deleted.\n", t->data);
}
void cqtrav()
{
    if (top == NULL)
    {
        printf("\nUnderflow\n");
        return;
    }
    LL *t;
    for (t = top; t != rear; t = t->next)
        printf("%3d", t->data);
    printf("%3d", t->data);
}
void main()
{
    LL *top, *rear;
    rear = top = NULL;
    int ch;
    do
    {
        printf("\nEnter your choice:\n1)Insert\n2)Delete\n3)Travere\n4)Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            cqinsert();
            break;
        case 2:
            cqdel();
            break;
        case 3:
            cqtrav();
            break;
        }
    } while (ch != 4);
}