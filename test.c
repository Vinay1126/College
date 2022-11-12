#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} LL;

LL *head;
void add()
{
    LL *new = (LL *)malloc(sizeof(LL));
    printf("\nEnter the value: ");
    scanf("%d", &new->data);
    new->next = NULL;
    if (head == NULL)
        head = new;
    else
    {
        LL *ptr = (LL *)malloc(sizeof(LL));
        ptr = head;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = new;
        ptr = new;
    }
}
void display()
{
    if (head == NULL)
    {
        printf("\nList is empty.");
        return;
    }
    LL *ptr = (LL *)malloc(sizeof(LL));
    ptr = head;
    while (ptr != NULL)
    {
        printf("%3d", ptr->data);
        ptr = ptr->next;
    }
}
void search(LL *ptr, int ele)
{
    if (ptr->data == ele)
    {
        printf("\nElement found.");
        return;
    }
    else
        search(ptr->next, ele);
}
void main()
{
    head = NULL;
    LL *ptr = (LL *)malloc(sizeof(LL));
    int ch, ele;
    do
    {
        printf("\n1)Add\n2)Display\n3)Search\n4)Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            printf("\nEnter element to search: ");
            scanf("%d", &ele);
            ptr = head;
            search(ptr, ele);
            break;
        }
    } while (ch != 4);
}