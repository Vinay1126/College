#include <stdio.h>
#include <string.h>

struct train
{
    char tname[30];
    struct
    {
        int hr, min;
    } ttime;
    int check;
};

void main()
{
    struct train x[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("\nEnter Train Name: ");
        gets(x[i].tname);
        printf("\nEnter the Hour and minute of arrival of train:\n");
        scanf("%d%d", &x[i].ttime.hr, &x[i].ttime.min);
        printf("\nIf it's A.M press 1 and if P.M press 0 :");
        scanf("%d", &x[i].check);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        if (x[i].check == 0 && (x[i].ttime.hr != 12))
            x[i].ttime.hr += 12;
        printf("\nTrain = %s", x[i].tname);
        printf("\nTime = %d:%d Hrs", x[i].ttime.hr, x[i].ttime.min);
    }
}
