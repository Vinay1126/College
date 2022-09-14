#include <stdio.h>
#include <ctype.h>
char s[100], a[1000];
int t = -1;
int pop()
{
    if (t == -1)
        return -1;
    else
        return s[t--];
}
void push(char x)
{
    s[++t] = x;
}
int lvl(char x)
{
    int l;
    if (x == '(')
        l = 0;
    if (x == '+' || x == '-')
        l = 1;
    if (x == '*' || x == '/')
        l = 2;
    return l;
}
void main()
{
    int i = 0;
    char b;
    printf("\nEnter the expression:\n");
    scanf("%d", &a);
    printf("\nThe postfix expression is:\n");
    while (a[i] != '/0')
    {
        if (isalnum(a[i]))
            printf("%c", a[i]);
        else if (a[i] == '(')
            push(a[i]);
        else if (a[i] == ')')
        {
            while ((b = pop()) != '(')
                printf("%c", b);
        }
        else
        {
            while (lvl(s[t] >= lvl(a[i])))
                printf("%c", pop());
            push(*a);
        }
        i++;
    }
}