//1~n平方和
#include <stdio.h>

int main()
{
    int n, i = 0, sum = 0;

    while (n<=0 || n >10)
    {
        printf("請輸入(1~10)之間的正整數n:");
        scanf("%d",&n);
    }

    while (i<=n)
    {
        sum += i*i;
        i++;

        if(i<=n)
            printf("%d的平方為:%d\n",i,i*i);
    }

    printf("1~%d的平方和為:%d",n,sum);

    return 0;
}                   