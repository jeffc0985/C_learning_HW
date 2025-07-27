//三角形判別
#include <stdio.h>

int main()
{   
    int a, b, c;
    printf("請由小到大輸入三角形的三邊長:");
    scanf("%d %d %d",&a,&b,&c);

    if (a+b>c)

        {
            if (a*a+b*b< c*c)
                printf("這是鈍角三角形");
            if (a*a+b*b==c*c)
                printf("這是直角三角形");
            if (a*a+b*b>c*c)
                printf("這是銳角三角形");
        }

    else
        printf("無法構成三角形");

    return 0;
}