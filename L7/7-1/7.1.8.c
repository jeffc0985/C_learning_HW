#include <stdio.h>

int main()
{
    int i, n;
    float sum = 0;
    printf("請輸入正整數n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        {
            sum = sum + (float)1/i;
        }

    printf("1+1/2+...+1/n之和為:%.3f",sum);

    return 0;
}