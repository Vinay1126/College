#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int stack[100];
int top = -1;

void push(int ele)
{
    top++;
    stack[top] = ele;
}

int pop()
{
    int ele = stack[top];
    top--;
    return ele;
}

int evalpost(char *ch)
{
    int val1, val2, res;
    while (*ch != '\0')
    {
        if (isdigit(*ch))
            push(*ch - '0');

        else
        {
            val1 = pop();
            val2 = pop();
            switch (*ch)
            {
            case '+':
                res = val1 + val2;
                break;
            case '-':
                res = val2 - val1;
                break;
            case '*':
                res = val2 * val1;
                break;
            case '/':
                res = val2 / val1;
                break;
            case '%':
                res = val2 % val1;
                break;
            }
            push(res);
        }
        ch++;
    }
    return pop();
}

void main()
{
    char postexp[100];
    printf("\nEnter postfix expression: ");
    scanf("%s", postexp);
    int result = evalpost(postexp);
    printf("Result is: %d", result);
}