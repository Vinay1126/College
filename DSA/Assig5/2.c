#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
typedef struct node emp;
emp *head, *ptr;
void add()
{
    emp *new;
    new = (emp *)malloc(sizeof(emp));
    printf("\nEnter the value: ");
    scanf("%d", &new->data);
    new->next = NULL;
    new->prev = NULL;
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->prev = ptr;
        ptr->next = new;
    }
    ptr = new;
    ptr->next = head;
    head->prev = ptr;
}
void disp(emp *t)
{
    if (t == head)
    {
        for (t = head; t->next != head; t = t->next)
            printf("%3d", t->data);
        printf("%3d", t->data);
        t = t->next;
        printf("%3d", t->data);
    }
    if (t == ptr)
    {
        for (t = ptr; t->prev != ptr; t = t->prev)
            printf("%3d", t->data);
        printf("%3d", t->data);
        t = t->prev;
        printf("%3d", t->data);
    }
}
void display()
{
    int n;
    printf("\n1)From First\n2)From Last\nEnter your choice.\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        disp(head);
        break;
    case 2:
        disp(ptr);
        break;
    }
}
void count()
{
    int count = 1;
    emp *t;
    t = (emp *)malloc(sizeof(emp));
    for (t = head; t->next != head; t = t->next)
        count++;
    printf("\nNo. of nodes present are %d", count);
}
void search()
{
    emp *t;
    int s, count = 0;
    printf("\nEnter node to search: ");
    scanf("%d", &s);
    for (t = head; t->next != head; t = t->next)
    {
        if (s == t->data)
        {
            printf("\nNode found.\n");
            count++;
            break;
        }
    }
    if (s == t->data && count == 0)
    {
        printf("\nNode found.\n");
        count++;
    }
    else if (count == 0)
        printf("\nNode not found.\n");
}
void ins(emp *t)
{
    emp *new;
    new = (emp *)malloc(sizeof(emp));
    printf("\nEnter the data you want to insert: ");
    scanf("%d", &new->data);
    new->next = NULL;
    new->prev = NULL;
    if (t == head)
    {
        new->next = head;
        new->prev = ptr;
        head = new;
        return;
    }
    if (t == ptr)
    {
        new->prev = ptr;
        new->next = head;
        ptr->next = new;
        ptr = new;
        return;
    }
}
void insp()
{
    emp *t, *new;
    int n1, i;
    printf("\nEnter the  position after you want to insert :\n");
    scanf("%d", &n1);
    new = (emp *)malloc(sizeof(emp));
    printf("\nEnter the data you want to insert: ");
    scanf("%d", &new->data);
    new->next = NULL;
    for (i = 1, t = head; t != NULL; t = t->next, i++)
    {
        if (i + 1 == n1)
        {
            new->prev = t;
            new->next = t->next;
            t->next->prev = new;
            t->next = new;
            return;
        }
    }
}
void insert()
{
    emp *t, *new;
    int n1, i, n;
    printf("\n1)At first.\n2)At Last.\n3)At a given position.\nEnter your choice.\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        ins(head);
        break;
    case 2:
        ins(ptr);
        break;
    case 3:
        insp();
        break;
    }
    printf("\nNode inserted.\n");
}
void del(emp *t)
{
    if (t == head)
    {
        head = head->next;
        head->prev = ptr;
        free(t);
        return;
    }
    if (t == ptr)
    {
        ptr = ptr->prev;
        ptr->next = head;
        free(t);
        return;
    }
}
void delp()
{
    emp *t, *k;
    int n1, i;
    printf("\nEnter the  position after you want to delete :\n");
    scanf("%d", &n1);
    for (i = 1, t = head; t != NULL; t = t->next, i++)
    {
        if (i + 1 == n1)
        {
            k = t->next;
            t->next = k->next;
            k->next->prev = t;
            free(k);
            return;
        }
    }
}
void delete ()
{
    emp *t, *new;
    int n1, i, n;
    printf("\n1)At first.\n2)At Last.\n3)At a given position.\nEnter your choice.\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        del(head);
        break;
    case 2:
        del(ptr);
        break;
    case 3:
        delp();
        break;
    }
    printf("\nNode deleted.\n");
}
void main()
{
    int n;
    head = NULL;
    do
    {
        printf("\n1)Add\n2)Display\n3)Count no. of nodes\n4)Search\n5)Insert\n6)Delete\n7)Exit\nEnter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            count();
            break;
        case 4:
            search();
            break;
        case 5:
            insert();
            break;
        case 6:
            delete ();
            break;
        }
    } while (n != 7);
}