//f(x,n)=sigma(k=1,n)x^k/k!
#include <stdio.h>

int fac(int);
double power(double,int);
double f(double,int);
int main()
{
    int n, i = 1, count = 0;
    double x, sum;
    printf("定義f(x,n)=sigma(k=1,n)x^k/k!\n");
    printf("請輸入任意數x:");
    scanf("%lf",&x);
    printf("請輸入正整數n:");
    scanf("%d",&n);

    printf("f(%lf,%d)的值為:%.12lf\n",x,n,f(x,n));
    
    while (count == 0)
    {
        if(f(0.1,i)-f(0.1,i-1)<0.00001)
            {
                count += 1;
                printf("n至少為%d時,f(0.1,n)-f(0.1,n-1)<0.00001",i);
            }
        i++;
    }
    

    return 0;
}

int fac(int n)
{
    int i, value = 1;
    for(i=1;i<=n;i++)
        value *= i;

    return value;

}

double power(double x,int n)
{
    double value = 1;
    for(int i=1;i<=n;i++)
        value *= x;
    return value;

}

double f(double x,int n)
{
    int k;
    double sum = 0;
    for(k=1;k<=n;k++)
        sum += power(x,k)/fac(k);

    return sum;

}

