//遞迴數列f(n)=2f(n-1)-5,f(0)=3
#include <stdio.h>

int f(int);
int main()
{
    int n;
    
    printf("定義f(n)=2f(n-1)-5,f(0)=3\n");
    printf("請輸入正整數n:");
    scanf("%d",&n);

    printf("f(%d)的值為:%d",n,f(n));
    return 0;
}

int f(int n)
{
    if(n == 0)
        return 3;
    else 
        return 2*f(n-1)-5;
}