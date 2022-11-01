#include <stdio.h>
#include <stdlib.h>

void deQueue(int);
void enQueue(int);
void push1();
void push2();
int pop1();
int pop2();
void display();

int stack1[100], stack2[100];
int top1, top2;

void main()
{
    top1 = top2 = -1;
    int ch, c = -1;

    while (1)
    {
        printf("\n--------------------------------\n");
        printf("1: To ENQUEUE\n");
        printf("2: To DEQUEUE\n");
        printf("3: To display queue elements\n");
        printf("0: To exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            c++;
            enQueue(c);
            break;
        case 2:
            c--;
            deQueue(c);
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

void enQueue(int c)
{
    if (top1 == 100)
    {
        printf("QUEUE OVERFLOW\n");
        return;
    }

    int s;
    printf("Enter element to be enqueued: ");
    scanf("%d", &s);

    if (c == 0)
        stack1[++top1] = s;

    else
    {
        for (int i = 0; i < c; i++)
            push2(pop1());
        top1 = 0;
        stack1[top1] = s;
        for (int i = 0; i < c; i++)
            push1(pop2());
    }
}

void deQueue(int c)
{
    if (top1 == -1)
    {
        printf("QUEUE UNDERFLOW\n");
        return;
    }

    printf("%d dequeued\n", pop1());
}

int pop1()
{
    return stack1[top1--];
}

int pop2()
{
    return stack2[top2--];
}

void push1(int s)
{
    stack1[++top1] = s;
}

void push2(int s)
{
    stack2[++top2] = s;
}

void display(int c)
{
    for (int i = top1; i >= 0; i--)
        printf("%d ", stack1[i]);
    printf("\n");
}