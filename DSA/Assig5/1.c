#include <stdio.h>
#include <stdlib.h>
struct poly
{
    int base, exp;
    struct poly *next;
};
typedef struct poly node;
node *head[3], *ptr[3];
void create()
{
    node *t;
    int ch;
    t = (node *)malloc(sizeof(node));
    printf("\nIn which polynomial you want to add?\n1)Poly 1\n2)Poly 2\n");
    scanf("%d", &ch);
    printf("\nEnter the base and exponent:\n");
    scanf("%d%d", &t->base, &t->exp);
    t->next = NULL;
    int n = ch - 1;
    if (head[n] == NULL)
        head[n] = t;
    else
        ptr[n]->next = t;
    ptr[n] = t;
}
void myshow(int c)
{
    if (c == 2)
        add();
    if (head[c] == NULL)
    {
        printf("\nPolynomial not present.");
        return;
    }
    node *t;
    for (t = head[c]; t != NULL; t = t->next)
    {
        printf("%d^%d", t->base, t->exp);
        if (t->next != NULL)
            printf(" + ");
    }
    printf("\n");
}
void list()
{
    int ch;
    printf("\nWhich polynomial you want to see?\n1)Poly 1\n2)Poly 2\n3)Resultant Poly\n");
    scanf("%d", &ch);
    int n = ch - 1;
    switch (n)
    {
    case 0:
        myshow(n);
        break;
    case 1:
        myshow(n);
        break;
    case 2:
        myshow(n);
        break;
    }
}
void add()
{
    node *p, *t, *q;
    t = (node *)malloc(sizeof(node));
    p = head[0];
    q = head[1];
    if (p->exp == q->exp)
    {
        t->exp = p->exp;
        t->base = p->base + q->base;
        p = p->next;
        q = q->next;
    }
    else if (p->exp > q->exp)
    {
        t->exp = p->exp;
        t->base = p->base;
        p = p->next;
    }
    else
    {
        t->exp = q->exp;
        t->base = q->base;
        q = q->next;
    }
    head[2] = t;
    while (p != NULL && q != NULL)
    {
        t->next = (node *)malloc(sizeof(node));
        t = t->next;
        if (p->exp == q->exp)
        {
            t->exp = p->exp;
            t->base = p->base + q->base;
            p = p->next;
            q = q->next;
        }
        else if (p->exp > q->exp)
        {
            t->exp = p->exp;
            t->base = p->base;
            p = p->next;
        }
        else
        {
            t->exp = q->exp;
            t->base = q->base;
            q = q->next;
        }
        t->next = NULL;
    }
    if (p == NULL && q != NULL)
    {
        for (; q != NULL; q = q->next)
        {
            t->next = (node *)malloc(sizeof(node));
            t = t->next;
            t->exp = q->exp;
            t->base = q->base;
        }
        t->next = NULL;
    }
    if (q == NULL && p != NULL)
    {
        for (; p != NULL; p = p->next)
        {
            t->next = (node *)malloc(sizeof(node));
            t = t->next;
            t->exp = p->exp;
            t->base = p->base;
        }
        t->next = NULL;
    }
    ptr[2] = t;
}
void main()
{
    int ch;
    for (int i = 0; i < 3; i++)
        head[i] = NULL;
    do
    {
        printf("\n1)Add Poly\n2)Show Poly\n3)Exit\nEnter your choice.\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            list();
            break;
        }
    } while (ch != 3);
}