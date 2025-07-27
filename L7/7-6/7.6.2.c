//找小於n的最大質數
#include <stdio.h>

int main()
{
    int i, j, n, m, count = 0;

    do
    {
        printf("請輸入一正整數n(n>2):");
        scanf("%d",&n);
    } while (n<=2);             //n<=2的防呆
    
    for (i=1;i<n;i++)           //1開始檢測到n-1
    {
        count = 0;
        for (j=1;j<=i;j++)      //從1檢測到i是不是i的因數
            if (i%j ==0)
                count += 1;     //若是,因數+1

        if (count == 2)         //因數數量為2時是質數,設值給m
            m = i;
    }

    printf("小於n的最大質數為:%d",m);

    return 0;
}
// line 13 可以檢測到sqrt(i)就好
//此時 line 20 改成if(count==1)
