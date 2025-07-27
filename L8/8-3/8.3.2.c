//遞迴數列r_power()
#include <stdio.h>

double r_pow(double,int);
int main()
{
    double x;
    int n;
    printf("請輸入底數及指數:");
    scanf("%lf %d",&x,&n);

    printf("%lf的%d次方為:%lf",x,n,r_pow(x,n));

    return 0;
}

double r_pow(double x,int n)
{
    if (n == 0)
        return 1;
    else
        return x*r_pow(x,n-1);
}
    