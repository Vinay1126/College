#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

void pushFront(int *stack, int *top1, int *top2)
{
    if (*top1 + 1 == *top2)
    {
        printf("STACK OVERFLOW\n");
        return;
    }

    int value;
    printf("Enter element to be pushed: ");
    scanf("%d", &value);
    (*top1)++;
    stack += *top1;
    *stack = value;
}

void pushRev(int *stack, int *top1, int *top2)
{
    if (*top1 + 1 == *top2)
    {
        printf("STACK OVERFLOW\n");
        return;
    }

    int value;
    printf("Enter element to be pushed: ");
    scanf("%d", &value);
    (*top2)--;
    stack += *top2;
    *stack = value;
}

void popFront(int *stack, int *top)
{
    if (*top == -1)
    {
        printf("STACK UNDERFLOW\n");
        return;
    }

    stack += *top;
    (*top)--;
    printf("%d popped from stack 1\n", *stack);
}

void popRev(int *stack, int *top)
{
    if (*top == MAXSIZE)
    {
        printf("STACK UNDERFLOW\n");
        return;
    }

    stack += *top;
    (*top)++;
    printf("%d popped from stack 2\n", *stack);
}

void displayFront(int *stack, int *top)
{
    if (*top == -1)
    {
        printf("EMPTY STACK\n");
        return;
    }

    printf("Stack 1: ");
    for (int i = 0; i <= *top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}

void displayRev(int *stack, int *top)
{
    if (*top == MAXSIZE)
    {
        printf("EMPTY STACK\n");
        return;
    }

    printf("Stack 2: ");
    for (int i = MAXSIZE - 1; i >= *top; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main()
{
    int arrayStack[MAXSIZE];
    int *top1, *top2, ch;
    int temp1 = -1, temp2 = MAXSIZE;
    top1 = &temp1;
    top2 = &temp2;

    do
    {
        printf("STACK 1:\n");
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Display\n");
        printf("\nSTACK 2\n");
        printf("4: Push\n");
        printf("5: Pop\n");
        printf("6: Display\n");
        printf("\n7: Exit\n");
        printf("Your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            pushFront(arrayStack, top1, top2);
            break;
        case 2:
            popFront(arrayStack, top1);
            break;
        case 3:
            displayFront(arrayStack, top1);
            break;
        case 4:
            pushRev(arrayStack, top1, top2);
            break;
        case 5:
            popRev(arrayStack, top2);
            break;
        case 6:
            displayRev(arrayStack, top2);
            break;
        }
    } while (ch != 7);
    return 0;
}
