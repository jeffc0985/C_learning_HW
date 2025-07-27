//計算不同寫法的費氏數列函數被呼叫次數
#include <stdio.h>

int fib_r(int);
int fib_for(int);

int main()
{
    int n;
    printf("請輸入正整數n:");
    scanf("%d",&n);

    printf("n=%d,fib_r()執行%d次,for_loop執行%d次",n,fib_r(n),fib_for(n));
    return 0;
}


int fib_r(int n)    //遞迴寫法
{
    int value = 0;
    static int i = 0;

    if (n == 1 || n == 2)
        value = 1;
    else
        value = fib_r(n-1)+fib_r(n-2);

    i++;
    return i;

}

int fib_for(int n)//for loop 寫法
{
    int a = 1, b = 1, c, i;
    int value = 0;
    static int j = 0;

    for(i=1;i<=n;i++)
        {
            j++;
            if(i<=2)
                value = 1;
            else
            {
                c = a+b;
                a = b;
                b = c;
                value = b; 
            }
        }
    return j;

}