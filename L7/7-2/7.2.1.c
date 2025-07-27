//2+4+...+n=?(while)
#include <stdio.h>

int main()
{
    int i = 0, n, sum = 0;

    while(n%2!=0 || n<2)
    {
        printf("請輸入一個正偶數:");
        scanf("%d",&n);
    }

    while (i<=n)
    {
        sum = sum + i;
        i += 2;
    }

    printf("2+4+...+n的和為:%d",sum);

    return 0;
}