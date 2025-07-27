//公倍數和
#include <stdio.h>

int main()
{
    int i, sum = 0;

    for(i=1;i<=100;i++)
        if(i%3==0 && i%8==0)
            sum = sum + i;

    printf("1~100中,可以同時被3和8整除之和為:%d",sum);
        
    return 0;
}