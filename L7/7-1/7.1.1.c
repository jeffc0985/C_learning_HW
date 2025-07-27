//1~n奇數和
#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    do
    {
        printf("請輸入正整數n:");
        scanf("%d",&n);

    } while(n<=1);
    
    for(i=1;i<=n;i=i+2)
    {
        sum = sum + i;
    }

    printf("1~%d的奇數和為:%d",n,sum);

    return 0;
}