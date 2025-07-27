//f(n)=sigma(k=1,n)1/k!
#include <stdio.h>

double f(int);
int fac(int);
int main()
{
    int n, i, first, count = 0;
    printf("定義f(n)=sigma(k=1,n)1/k!\n");
    printf("請輸入正整數n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("f(%d)的值為:%.12lf\n",i,f(i));
        while (f(i)-f(i-1)<0.0001)
        {
            count += 1;
            if(count == 1)
                {
                    first = i; //取第一個符合條件的
                    break;
                }
            else
                break;
        }
    }

    if (count == 0)
        printf("沒有n值使得f(n)-f(n-1)<0.0001");
    else
        printf("當n至少為%d時,f(n)-f(n-1)的值<0.0001",first);
    
    return 0;
}

int fac(int n)
{
    int i, value = 1;
    for(i=1;i<=n;i++)
        value *= i;

    return value;

}

double f(int n)
{
    int i;
    double sum = 0;
    for(i=1;i<=n;i++)
        sum +=  1.0/fac(i);

    return sum;

}