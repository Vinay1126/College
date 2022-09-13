#include <stdio.h>
#include <math.h>
void main()
{
    int a, b;
    char ch;
    printf("\nEnter the 2 no.s:\n");
    scanf("%d%d", &a, &b);
    fflush(stdin);
    printf("\nEnter the operation you want to perform:\n+\n-\n/\n*\n%%\n");
    scanf("%c", &ch);
    switch (ch)
    {
    case '+':
        printf("\nThe sum of the 2 no.s is %d", a + b);
        break;
    case '-':
        printf("\nThe diff of the 2 no.s is %d", abs(a - b));
        break;
    case '*':
        printf("\nThe product of the 2 no.s is %d", a * b);
        break;
    case '/':
        printf("\nThe division of the 2 no.s is %d", a / b);
        break;
    case '%':
        printf("\nThe modulus of the 2 no.s is %d", a % b);
        break;
    }
}