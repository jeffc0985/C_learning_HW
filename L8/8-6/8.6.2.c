#include <stdio.h>

#define CUBIC(x) x*x*x
int main()
{
    double n;
    printf("請輸入數字:");
    scanf("%lf",&n);

    printf("%lf)的三次方為:%lf",n,CUBIC(n));
    return 0;
}