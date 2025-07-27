//n的因數
#include <stdio.h>

int main()
{
    int n, i;
    printf("請輸入一個正整數:");
    scanf("%d",&n);
    printf("%d的因數有:",n);

    for (i=1;i<=n;i++)
    {
        if (n%i == 0)
        {
            printf("%d",i);
            if(i!=n)
                printf("、");
        }
    }

    return 0;
}