#include <stdio.h>
#include <stdlib.h>
int front, rear;
void insr(int *deque, int max)
{
    if (rear - 1 == front)
    {
        printf("\nOverflow\n");
        return;
    }
    int item;
    if (rear == -1)
        rear = max;
    printf("\nEnter no. you want to insert: ");
    scanf("%d", &item);
    deque[--rear] = item;
}
void delr(int *deque, int max)
{
    if (rear == -1)
    {
        printf("\nUnderflow\n");
        return;
    }
    int t = deque[rear];
    rear++;
    printf("\nElement deleted is %d", t);
    free(t);
    if (rear == max)
        rear = -1;
}
void disp(int *deque, int max)
{
    if (rear == -1)
    {
        printf("\nUnderflow\n");
        return;
    }
    for (int i = rear; i < max; i++)
        printf("%3d", deque[i]);
}
void main()
{
    int n;
    front = rear = -1;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    int deque[n];
    int ch;
    do
    {
        printf("\n1)Insert\n2)Display\n3)Delete\n4)Exit\nEnter your choice.");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insr(deque, n);
            break;
        case 2:
            disp(deque, n);
            break;
        case 3:
            delr(deque, n);
            break;
        }
    } while (ch != 4);
}