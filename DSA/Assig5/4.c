#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char stack[100];
int top = -1;
void push(char x)
{
    top++;
    stack[top] = x;
}
char pop()
{
    char s;
    if (top == -1)
    {
        printf("\nUnderflow\n");
        exit(1);
    }
    else
    {
        s = stack[top];
        top--;
        return s;
    }
}
int check(char s)
{
    if (s == '^' || s == '*' || s == '/' || s == '+' || s == '-')
        return 1;
    return 0;
}
int lvl(char s)
{
    if (s == '^')
        return 3;
    else if (s == '*' || s == '/')
        return 2;
    else if (s == '+' || s == '-')
        return 1;
    else
        return 0;
}
void change(char in[], char post[])
{
    int i = 0, j = 0;
    char s, tmp;
    push('(');
    strcat(in, ")");
    for (s = in[i]; s != '\0'; i++)
    {
        if (s == '(')
            push(s);
        else if (isdigit(s) || isalpha(s))
        {
            post[j] = s;
            j++;
        }
        else if (check(s))
        {
            tmp = pop();
            while ((check(s)) && (lvl(tmp) >= lvl(s)))
            {
                post[j] = tmp;
                j++;
                tmp = pop();
            }
            push(tmp);
            push(s);
        }
        else if (s == ')')
        {
            tmp = pop();
            while (tmp != '(')
            {
                post[j] = tmp;
                j++;
                tmp = pop();
            }
        }
    }
    post[j] = '\0';
}
void main()
{
    char in[100], post[100];
    printf("\nEnter the expression in infix.\n");
    scanf("%s", in);
    change(in, post);
    printf("\nThe postfix Expression:  ");
    puts(post);
    return 0;
}