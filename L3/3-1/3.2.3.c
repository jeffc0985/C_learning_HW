#include <stdio.h>

int main()
{
    unsigned short a = 80000;           /*will overflow*/
    unsigned int b = 80000;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}