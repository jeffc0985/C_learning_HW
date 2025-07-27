//mod(x,y)
#include <stdio.h>

int mod(int,int);
int main()
{
    int a, b;
    printf("請輸入被除數:");
    scanf("%d",&a);
    printf("請輸入除數:");
    scanf("%d",&b);

    printf("%d/%d的餘數為:%d",a,b,mod(a,b));

    return 0;
}

int mod(int a,int b)
{
    return a%b;
}