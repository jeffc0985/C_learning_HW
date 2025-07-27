//遞迴數列(偶數和)
#include <stdio.h>

int sum2(int);
int main()
{
    int n;
    printf("請輸入正整數n:");
    scanf("%d",&n);

    printf("2~%d之偶數和為:%d",2*n,sum2(n));
    return 0;
}

int sum2(int n)
{
    if(n == 1)
        return 2;
    else
        return 2*n+sum2(n-1);

}