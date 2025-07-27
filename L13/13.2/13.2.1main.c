#include <stdio.h>

void func(void);
int a;
int main()
{
    a = 100;

    printf("a=%d\n",a);
    func();
    printf("a=%d\n",a);

    return 0;
}