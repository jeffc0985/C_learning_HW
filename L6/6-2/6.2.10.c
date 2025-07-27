//求根
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    double x1, x2;
    printf("給定一一元二次方程式ax²+bx+c=0\n");
    printf("請依序輸入a,b,c的係數");
    scanf("%f %f %f",&a,&b,&c);

    if (b*b-4*a*c>0)
        {
            x1 = -b+sqrtf(b*b-4*a*c)/2*a;
            x2 = -b-sqrtf(b*b-4*a*c)/2*a;
            printf("方程式有相異兩實根,分別為%.3f,%.3f",x1,x2);
        }

    if (b*b-4*a*c==0)
        {
            x1 = -b/2*a;
            x2 = x1;
            printf("方程式有重根%.3f",x2);
        }

    if (b*b-4*a*c<0)

        printf("方程式無實根");

    return 0;
}