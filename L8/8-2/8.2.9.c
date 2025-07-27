//f(x,n)=sigma(k=1,n)(-1)^k*x^(2k+1)/(2k+1)!
#include <stdio.h>

int fac(int);
double power(double ,int);
double f(double,int);
int main()
{
    int i, n,count = 0;
    double x;
    printf("定義f(x,n)=sigma(k=1,n)(-1)^k*x^(2k+1)/(2k+1)!\n");
    printf("請輸入任意數x:");
    scanf("%lf",&x);
    printf("請輸入正整數n:");
    scanf("%d",&n);

    printf("f(%lf,%d)的值為:%.12lf\n",x,n,f(x,n));

    //計算n等於幾時,|f(2.2,n)-f(2.2,n-1)|<0.0001
    i = 2;
    do
    {
        double value = f(2.2,i)-f(2.2,i-1);
        if (value<0)
            value = -value;     
        if(value<0.0001)
            {
                printf("n至少為%d時,|f(2.2,n)-f(2.2,n-1)|<0.0001",i);
                break;
            }
        i++;
        
    } while (1);
    
    return 0;

    // for(i=1;i<=n;i++)
    // {
    //     while (-0.0001<f(2.2,i-1)-f(2.2,i) && f(2.2,i-1)-f(2.2,i)<0.0001)
    //     {
    //         count += 1;
    //         if (count == 1)
    //             {
    //                 printf("n至少為%d時,|f(2.2,n)-f(2.2,n-1)|<0.0001",i);
    //                 break;
    //             }
    //         else
    //             break;
        
    //     }
    // }
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
    int i;
    double value = 1.0;
    for(i=1;i<=n;i++)
        value *= x;
    return value;

}

double f(double x,int n)
{
    int k;
    double sum = 0;
    for(k=1;k<=n;k++)
        sum += (power(-1,k)*power(x,2*k+1))/fac(2*k+1);
    return sum;
}