#include <stdio.h>

void count(int*);
int main()
{
    int a = 0;
    int* p = &a;

    for(int i=1;i<=10;i++)
        count(p);

    printf("a=%d",a);

    return 0;
}

void count(int* p)
{
    *p += 1;
}
//注意此處不可寫成*p++,當執行完此行瞬間函數生命週期結束,++會加到殘值上