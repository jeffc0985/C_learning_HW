#include <stdio.h>

#define f(x) (4*x*x)+(6*x)-5
int main()
{
    double n;
    printf("請輸入數字:");
    scanf("%lf",&n);

    printf("f(%lf)的值為:%lf",n,f(n));
    return 0;
}