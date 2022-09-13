
#include <stdio.h>
#include <math.h>

int num,a[32];

void dtb()
{
    int i,n=num;
    for(i=31;n>=1;i--,n/=2)
        a[i]=n%2;
}
void main()
{
    int i,j,n,c;
    printf("Enter a number: ");
    scanf("%d",&num);
    dtb();
    for(i=0,c=1;i<25;i+=8,c++)
    {
        n=0;
        for(j=i;j<(i+8);j++)
            n+=a[j]*pow(2,(7-j+i));
        printf("\nThe content of B%d = %d",c,n);
    }
}
