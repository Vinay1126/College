#include<stdio.h>
#include<math.h>

int a[32];

void input(int m,int n)
{
    for(;m<n;m++)
        scanf("%d",&a[m]);
}
int btd(int *p)
{
    int i=0,j=31,t=0;
    while(j>=0)
    {
        if(p[j]*2>0)
            t+=pow(p[j]*2,i);
        i++;
        j--;
    }
    return t;
}
void main()
{
    int num;
    printf("Enter elements of B1:\n");
    input(0,8);
    printf("Enter elements of B2:\n");
    input(8,16);
    printf("Enter elements of B3:\n");
    input(16,24);
    printf("Enter elements of B4:\n");
    input(24,32);

    printf("Number = %d",btd(a));
}
