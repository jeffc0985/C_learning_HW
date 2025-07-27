//遞迴數列(累加)
#include <stdio.h>

int sum(int);
int main()
{
    int n;
    printf("請輸入正整數n:");
    scanf("%d",&n);

    printf("1~%d之和為:%d",n,sum(n));
    return 0;
}

int sum(int n)
{
    if(n == 1)
        return 1;
    else
        return n+sum(n-1);

}