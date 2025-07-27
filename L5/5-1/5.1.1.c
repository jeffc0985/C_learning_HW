#include <stdio.h>

int main()
{
    int a = 8;

    printf("a=%d\n",++a);
    printf("a=%d\n",a--);

    int b = 10, c = 20;
    b = b%5;
    c = c/6;

    printf("b=%d\n",b);
    printf("c=%d\n",c);

    int d = 20, e = 5;
    d = d%e;
    e = e*3;

    printf("d=%d\n",d);
    printf("e=%d\n",e);

    return 0;
}