#include <stdio.h>
int front, rear;
void cqinsert(int *queue, int size)
{
    if ((rear + 1) % size == front)
    {
        printf("\nOverflow\n");
        return;
    }
    int ch;
    printf("\nEnter no. you want to insert: ");
    scanf("%d", &ch);
    if (front == rear && front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % size;
    queue[rear] = ch;
    printf("\nNo. inserted.\n");
}
void cqdel(int *queue, int size)
{
    if (front == -1 && rear == -1)
    {
        printf("\nUnderflow\n");
        return;
    }
    int val;
    if (front == rear)
    {
        val = queue[front];
        front = rear = -1;
    }
    else
    {
        val = queue[front];
        front++;
    }
    printf("\n%d deleted.\n", val);
}
void cqtrav(int *queue, int size)
{
    if (front == -1 && rear == -1)
    {
        printf("\nUnderflow\n");
        return;
    }
    for (int i = front; i != rear; i = (i + 1) % size)
        printf("%3d", queue[i]);
    printf("%3d", queue[rear]);
}
void main()
{
    int n;
    front = rear = -1;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    int queue[n];
    int ch;
    do
    {
        printf("\nEnter your choice:\n1)Insert\n2)Delete\n3)Travere\n4)Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            cqinsert(queue, n);
            break;
        case 2:
            cqdel(queue, n);
            break;
        case 3:
            cqtrav(queue, n);
            break;
        }
    } while (ch != 4);
}
