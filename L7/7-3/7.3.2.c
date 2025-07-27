//1+2+...+n>1000
#include <stdio.h>

int main()
{
    int i = 1, sum = 0;

    do
    {
       sum = sum + i;
       i++;

    } while (sum<1000);

    printf("最小n值為:%d",i-1);
    
    return 0;
}