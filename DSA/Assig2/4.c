#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};

struct employee
{
    char name[20];
    struct date dob;
    struct date doj;
    int sal;
};
typedef struct employee emp;

void myinput(int n, emp *x)
{
    int i;
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("\n\nEnter employee name:\n");
        gets((x+i)->name);
        printf("\nEnter date of birth of employee:");
        printf("\nEnter date: ");
        scanf("%d",&(x+i)->dob.day);
        printf("\nEnter month: ");
        scanf("%d",&(x+i)->dob.month);
        printf("\nEnter year: ");
        scanf("%d",&(x+i)->dob.year);
        printf("\nEnter date of joining of employee:");
        printf("\nEnter date: ");
        scanf("%d",&(x+i)->doj.day);
        printf("\nEnter month: ");
        scanf("%d",&(x+i)->doj.month);
        printf("\nEnter year: ");
        scanf("%d",&(x+i)->doj.year);
        printf("\nEnter salary of employee:\n");
        scanf("%d",&(x+i)->sal);
    }
}
void myoutput(int n, emp *x)
{
    int i;
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("\n\nEmployee name: %s",(x+i)->name);
        printf("\nDate of birth of employee:");
        printf("\nDate: %d",(x+i)->dob.day);
        printf("\nMonth: %d",(x+i)->dob.month);
        printf("\nYear: %d",(x+i)->dob.year);
        printf("\nDate of joining of employee:");
        printf("\nDate: %d",(x+i)->doj.day);
        printf("\nMonth: %d",(x+i)->doj.month);
        printf("\nYear: %d",(x+i)->doj.year);
        printf("\n\nSalary: %d",(x+i)->sal);
    }
}
void sname(int n,emp *p)
{
    emp t;
    int l;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            l=strcmpi((p+j)->name,(p+j+1)->name);
            if(l>0)
            {
                    t=p[j];
                    p[j]=p[j+1];
                    p[j+1]=t;
            }
            else
                continue;
        }
    }
    myoutput(n,p);
}
void sdob(int n, emp *p)
{
    emp t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((p+j)->dob.year > (p+j+1)->dob.year)
            {
                    t=p[j];
                    p[j]=p[j+1];
                    p[j+1]=t;
            }
            if((p+j)->dob.year == (p+j+1)->dob.year)
            {
                if((p+j)->dob.month > (p+j+1)->dob.month)
                {
                    t=p[j];
                    p[j]=p[j+1];
                    p[j+1]=t;
                }
                if((p+j)->dob.month == (p+j+1)->dob.month)
                {
                    if((p+j)->dob.day > (p+j+1)->dob.day)
                    {
                        t=p[j];
                        p[j]=p[j+1];
                        p[j+1]=t;
                    }
                }
            }
        }
    }
    myoutput(n,p);
}
void sdoj(int n,emp *p)
{
    emp t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((p+j)->doj.year > (p+j+1)->doj.year)
            {
                    t=p[j];
                    p[j]=p[j+1];
                    p[j+1]=t;
            }
            if((p+j)->doj.year == (p+j+1)->doj.year)
            {
                if((p+j)->doj.month > (p+j+1)->doj.month)
                {
                    t=p[j];
                    p[j]=p[j+1];
                    p[j+1]=t;
                }
                if((p+j)->doj.month == (p+j+1)->doj.month)
                {
                    if((p+j)->doj.day > (p+j+1)->doj.day)
                    {
                        t=p[j];
                        p[j]=p[j+1];
                        p[j+1]=t;
                    }
                }
            }
        }
    }
    myoutput(n,p);
}
void ssal(int n,emp *p)
{
    emp t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((p+j)->sal > (p+j+1)->sal)
            {
                    t=p[j];
                    p[j]=p[j+1];
                    p[j+1]=t;
            }
        }
    }
    myoutput(n,p);
}
void main()
{
    int n,ch,l=0;
    printf("\nHow many records you want:\n");
    scanf("%d",&n);
    emp x[n];
    myinput(n,x);
    do
    {
        printf("\n1)By name\n2)By date of birth\n3)By date of joining\n4)By salary\n5)Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            sname(n,x);
            break;
        case 2:
            sdob(n,x);
            break;
        case 3:
            sdoj(n,x);
            break;
        case 4:
            ssal(n,x);
            break;
        case 5:
            l++;
            break;
        }
    }while(l==0);
}
