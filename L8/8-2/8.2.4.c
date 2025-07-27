//f(x)=3x^3+2^x-1
#include <stdio.h>

double f(double);
int main()
{
    double x;
    printf("請輸入要計算的值:");
    scanf("%lf",&x);
    printf("f(%.3lf)的值為:%lf",x,f(x));

    return 0;
}

double f(double x)
{
    return 3*x*x*x+2*x-1;
}