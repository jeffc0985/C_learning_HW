#include <stdio.h>

void add10(int,int);

int a = 3, b = 5;   //全域變數
int main()
{
    printf("呼叫函數之前,a,b的值為%d,%d\n",a,b);    //3,5
    add10(a,b);
    printf("呼叫函數之後,a,b的值為%d,%d",a,b);      //3,5

    return 0;
}

void add10(int a,int b)    //這裡的a,b是區域變數,和全域的a,b無關聯
{
    a += 10;
    b += 10;
}