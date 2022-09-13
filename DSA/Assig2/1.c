#include<stdio.h>
#include<string.h>

struct details
{
    char name[30],city[20];
    int age;
};

void main()
{
    struct details x[5];
    int i,t;
    for(i=0;i<5;i++)
    {
        fflush(stdin);
        printf("\nEnter name: ");
        gets(x[i].name);
        printf("\nEnter age: ");
        scanf("%d",&x[i].age);
        fflush(stdin);
        printf("\nEnter city name: ");
        gets(x[i].city);
    }
    for(i=1,t=0;i<5;i++)
    {
        if(x[t].age<x[i].age)
        {
            t=i;
        }
    }
    fflush(stdin);
    printf("\n Name = %s",x[t].name);
    printf("\n Age = %d",x[t].age);
    fflush(stdin);
    printf("\n City Name = %s",x[t].city);
}
