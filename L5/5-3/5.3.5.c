//球體體積
#include <stdio.h>

int main()
{   
    float r, v;
    float pi = 3.14;

    printf("請輸入半徑:");
    scanf("%f",&r);

    v = 4.0/3*pi*r*r*r;

    printf("球體積約為:%.3f",v);

    return 0;
}