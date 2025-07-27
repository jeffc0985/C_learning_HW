#include <stdio.h>

int main()
{
    int a = 12, b = 6;

    // printf("num=%d\n",a/=b);    //2,72,84,72,0
    // printf("num=%d\n",a*=b++);
    // printf("num=%d\n",a*=++b);
    // printf("num=%d\n",a*=b--);
    printf("num=%d\n",a%=b);

    return 0;
}