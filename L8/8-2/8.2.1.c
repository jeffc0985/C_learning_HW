//cube(x)
#include <stdio.h>

double cube(double);
int main()
{
    double x;
    printf("請輸入底數:");
    scanf("%lf",&x);

    printf("%lf的立方為%lf",x,cube(x));
    return 0;
}

double cube(double x)
{
    return x*x*x;

}