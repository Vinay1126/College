#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node emp;
emp *head, *ptr;
void add()
{
    emp *new;
    new = (emp *)malloc(sizeof(emp));
    printf("\nEnter the value: ");
    scanf("%d", &new->data);
    new->next = head;
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        ptr->next = new;
    }
    ptr = new;
}
void display()
{
    emp *t;
    for (t = head; t->next != head; t = t->next)
        printf("%3d", t->data);
    printf("%3d", t->data);
    t = t->next;
    printf("%3d", t->data);
}
void count()
{
    int count = 0;
    emp *t;
    for (t = head; t->next != head; t = t->next)
        count++;
    printf("\nNo. of nodes present are %d", ++count);
}
void search()
{
    emp *t;
    int s;
    printf("\nEnter node to search: ");
    scanf("%d", &s);
    for (t = head; t->next != head; t = t->next)
    {
        if (s == t->data)
        {
            printf("\nNode found.\n");
            return;
        }
    }
    if (s == t->data)
    {
        printf("\nNode found.\n");
        return;
    }
    if (t == head)
        printf("\nNode not found.\n");
}
void ins(emp *t, emp *new)
{
    if (t == head)
    {
        new->next = head;
        head = new;
        return;
    }
    if (t == ptr)
    {
        new->next = head;
        ptr->next = new;
        ptr = new;
        return;
    }
}
void insp(emp *new)
{
    emp *t;
    int n1, i;
    printf("\nEnter the  position after you want to insert :\n");
    scanf("%d", &n1);
    for (i = 1, t = head; t->next != head; t = t->next, i++)
    {
        if (i + 1 == n1)
        {
            new->next = t->next;
            t->next = new;
            return;
        }
    }
    if (t == head)
        printf("\nWrong input\n");
}
void insert()
{
    emp *new;
    int n;
    new = (emp *)malloc(sizeof(emp));
    printf("\nEnter the data you want to insert: ");
    scanf("%d", &new->data);
    printf("\n1)At first.\n2)At Last.\n3)At a given position.\nEnter your choice.\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        ins(head, new);
        break;
    case 2:
        ins(ptr, new);
        break;
    case 3:
        insp(new);
        break;
    }
    printf("\nNode inserted.\n");
}
void del(emp *t)
{
    if (t == head)
    {
        head = head->next;
        free(t);
        return;
    }
    if (t == ptr)
    {
        for (t = head; t->next != ptr; t = t->next)
            ;
        ptr = t;
        t = t->next;
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
    for (i = 1, t = head; t->next != head; t = t->next, i++)
    {
        if (i + 1 == n1)
        {
            k = t->next;
            t->next = k->next;
            free(k);
            return;
        }
    }
}
void delete ()
{
    int n;
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