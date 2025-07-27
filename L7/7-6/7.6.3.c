//中國剩餘定理
#include <stdio.h>

int main()
{
    int i = 0;
    while (1)
    {
       if(i%3==1 && i%5==3 && i%7==2)
            break;
        else
            i++;    
    }

    printf("最小n值為%d",i);

    return 0;
}