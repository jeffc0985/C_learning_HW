#include <stdio.h>

int main()
{
    int i;
    printf("可被2和3整除,但不能被12整除的數有:\n");
    for(i=1;i<=100;i++)
        {
            if (i%12 == 0)
            continue;
            if (i%2==0 && i%3==0)
                printf("%d ",i);     
        }

    return 0;
}