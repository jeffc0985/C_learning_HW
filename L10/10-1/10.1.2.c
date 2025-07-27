#include <stdio.h>

int main()
{
    float num = 12.6f;
    float* p = &num;

    printf("num=%f\n",*p);
    printf("&p=%p\n",&p);
    return 0;
}