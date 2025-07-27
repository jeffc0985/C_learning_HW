#include <stdio.h>

void add10();

int a = 3, b = 5;   //全域變數
int main()
{
    printf("呼叫函數之前,a,b的值為%d,%d\n",a,b);    //3,5
    add10(a,b);
    printf("呼叫函數之後,a,b的值為%d,%d",a,b);      //13,15

    return 0;
}

void add10()    //函數有權更改
{
    a += 10;
    b += 10;
}