//遞迴數列
#include <stdio.h>

int r_sum(int);
int main()
{
    int n;
    
    printf("定義r_sum(n)=1*2+2*3+...+(n-1)*n\n");
    printf("請輸入正整數n(n>1):");
    scanf("%d",&n);

    printf("1*2+2*3+...%d*%d的值為:%d",n-1,n,r_sum(n));
    return 0;
}

int r_sum(int n)
{
    if(n == 2)
        return 1*2;
    else
        return r_sum(n-1)+(n-1)*n;

}