#include <stdio.h>
void add10(int*,int*);
int main()
{
    int a = 10, b = 50;
    int* p1 = &a, *p2 = &b;

    printf("呼叫前,a=%d, b=%d\n",a,b);

    add10(p1,p2);

    printf("呼叫後,a=%d, b=%d",a,b);
    return 0;
}

void add10(int* p1, int* p2)
{
    *p1 += 10;
    *p2 += 10;
}