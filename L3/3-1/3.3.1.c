#include <stdio.h>

int main()
{
    int a = 578, b = 784000000;
    float c = 6.78f;
    double d = 718.26, e = 642e127;

    printf("sizeof(a,b,c,d,e) = (%d, %d, %d, %d, %d)\n"    
        ,sizeof(a)
        ,sizeof(b)
        ,sizeof(c)
        ,sizeof(d)
        ,sizeof(e));
    return 0;
}