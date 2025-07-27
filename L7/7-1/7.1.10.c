//找三位數水仙花數
#include <stdio.h>

int main()
{
    int i, j, r, sum;
    printf("所有三位數Armstrong數有:");
    for(i=100;i<1000;i++)
    {   
        sum = 0;
        j = i;
        while(j>0)
        {
            r = j%10;
            j = j/10;
            sum = sum + r*r*r;
        }

        if (i == sum)
            printf("%d ",i);
    }

    return 0;
}