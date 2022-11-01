#include <stdio.h>
#include <stdlib.h>

void push(int);
void pop(int);
int deQueue1();
int deQueue2();
void enQueue1(int);
void enQueue2(int);
void display();

int queue1[100], queue2[100];
int front1, front2, rear1, rear2;

void main()
{
    front1 = front2 = rear1 = rear2 = -1;
    int ch, c = -1;

    while (1)
    {
        printf("\n--------------------------------\n");
        printf("1: To PUSH into stack\n");
        printf("2: To POP out of stack\n");
        printf("3: To display stack elements\n");
        printf("0: To exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            c++;
            push(c);
            break;
        case 2:
            c--;
            pop(c);
            break;
        case 3:
            display(c);
            break;
        case 0:
            exit(0);
        default:
            printf("INVALID CHOICE\n");
        }
    }
}

void push(int c)
{
    if (rear1 == 100)
    {
        printf("STACK OVERFLOW\n");
        return;
    }

    int ele;
    printf("Enter element to be pushed: ");
    scanf("%d", &ele);

    if (c == 0)
    {
        queue1[++front1] = ele;
        rear1 = front1;
    }

    else
    {
        for (int i = 0; i < c; i++)
            enQueue2(deQueue1());
        front1 = rear1 = front2 = 0;
        queue1[front1] = ele;
        for (int i = 0; i < c; i++)
            enQueue1(deQueue2());
    }
}

void pop(int c)
{
    if (front1 == -1)
        printf("STACK UNDERFLOW\n");
    else
        printf("%d popped\n", deQueue1());
}

int deQueue1()
{
    int temp = front1;
    if (front1 == rear1)
        front1 = rear1 = -1;
    else
        front1++;
    return queue1[temp];
}

int deQueue2()
{
    int temp = front2;
    if (front2 == rear2)
        front2 = rear2 = -1;
    else
        front2++;
    return queue2[temp];
}

void enQueue1(int ele)
{
    queue1[++rear1] = ele;
}

void enQueue2(int ele)
{
    queue2[++rear2] = ele;
}

void display(int c)
{
    if (front1 == -1)
    {
        printf("STACK is EMPTY\n");
        return;
    }

    for (int i = front1; i <= rear1; i++)
        printf("%d ", queue1[i]);
    printf("\n");
}