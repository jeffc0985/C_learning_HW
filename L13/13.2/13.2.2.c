#include <stdio.h>

double area(double r);
double peri(double r);

double n;
int main()
{
    printf("請輸入半徑:");
    scanf("%lf",&n);

    printf("peri=%.2lf\n",peri(n));
    printf("area=%.2lf\n",area(n));
    
    return 0;
}