#include <stdio.h>

int main()
{
    int i = 1;
    printf("可被2和3整除,但不能被12整除的數有:\n");
    while (i<=100)
    {
        if (i%2==0 && i%3==0)
            if(i%12!=0)
                printf("%d ",i);       
        i++;
    }
    
    return 0;
}