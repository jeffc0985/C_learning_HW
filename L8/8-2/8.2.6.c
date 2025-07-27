//f(n)=sigma(k=1,n)1/2^k
#include <stdio.h>

double f(int);
double power(int);    //2的n次方
int main()
{
    int n, i, first, count = 0;
    printf("定義f(n)=sigma(k=1,n)1/2^k\n");
    printf("請輸入正整數n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            printf("f(%d)=%.12lf\n",i,f(i));
            while (f(i)>=0.99999)
            {
                count += 1;
                if(count == 1)
                    {   
                        first = i;  //第一個大於0.99999的
                        break;
                    }
                else
                    break;
            }
        }

    if(count == 0)
        printf("沒有n值使得f(n)>=0.99999");
    else
        printf("當n至少為%d時,f(%d)的值大於0.99999",first,first);
    return 0;
}

double f(int n)
{
    int i;
    double sum = 0;
    for(i=1;i<=n;i++)
        sum += 1/power(i);

    return sum;
}

double power(int n)
{
    int i;
    double a = 1;
    for(i=1;i<=n;i++)
        a *= 2;

    return a;

}