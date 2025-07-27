//計算函數被呼叫次數
#include <stdio.h>

void counter();

int main()
{
    counter();
    counter();
    counter();
    return 0;
}

void counter()
{ 
    static i = 1;
    printf("counter被呼叫%d次\n",i);
    i++;

}