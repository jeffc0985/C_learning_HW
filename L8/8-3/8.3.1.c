//費氏數列(for loop)
#include <stdio.h>

int fib(int);
int main()
{
    int n;
    printf("請輸入正整數n:");
    scanf("%d",&n);

    printf("fib(%d)=%d",n,fib(n));
    return 0;
}

int fib(int n)
{   
    int a = 1, b = 1, c, i;
    if(n == 1 || n == 2)    //前兩項是1
        return 1;
    for(i=3;i<=n;i++)       
        {
            c = a+b;
            a = b;
            b = c;
        }
    return b;

}