//計算1²-2²+3²...+49²-50²:
#include <stdio.h>

int main()
{
    int i, j, sum1 = 0, sum2 = 0;
    
    for (i=1;i<=50;i+=2)
        sum1 = sum1 + i*i;
    for (j=2;j<=50;j+=2)
        sum2 = sum2 + j*j;

    printf("1²-2²+3²...+49²-50²的值為:%d",sum1-sum2);
    return 0;
}