//計算費氏數列函數被呼叫次數
#include <stdio.h>

int fib(int);
void counter();
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
    counter();
    if(n == 1 || n == 2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

// int fib(int n)
// {   
//     counter();
//     int a = 1, b = 1, c, i;
//     if(n == 1 || n == 2)
//         return 1;
//     for(i=3;i<=n;i++)       
//         {
//             c = a+b;
//             a = b;
//             b = c;
//         }
//     return b;

// }

void counter()
{
    static int i = 1;
    printf("fib()被呼叫%d次了...\n",i);
    i++;

}