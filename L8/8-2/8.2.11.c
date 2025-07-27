//尤拉圓周率公式
#include <stdio.h>
#include <math.h>

int find_k(int);
int prime(int);
double f(int);

int main()
{
    int n;
    printf("請輸入正整數n:");
    scanf("%d",&n);
    printf("Euler(%d)=%.12lf",n,f(n));
    return 0; 
}

int find_k(int n)
{
    int k = 0;
    int value, next_value;
    do
    {
        value = 4*k+2;
        next_value = 4*(k+1)+2;
        if(value <= n && next_value>n)
            if (n-value < next_value-n)
                return value;
            else
                return next_value;     

        k++;
    } while (1);
    
    
}

int prime(int n)
{
    int i = 2, j, count = 0;
    
    do
    {
        int is_prime = 1;
        for(j=2;j<=sqrt(i);j++)
            if(i%j == 0)
            {
                is_prime = 0;
                break;
            }
        if(is_prime)
            count += 1;

        if(count == n)
            return i;
        i++;

    } while (1);
    
}

double f(int n)
{
    double value = 1.0;
    for(int i=1;i<=n;i++)
        value *= (double)prime(i)/find_k(prime(i));

    return 2*value;

}