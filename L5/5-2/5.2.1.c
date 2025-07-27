#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    //printf("num=%d\n",(a++)+b);       //8,9,8,10,13
    //printf("num=%d\n",(++a)+b);
    //printf("num=%d\n",(a++)+(b++));
    //printf("num=%d\n",(++a)+(++b));
    printf("num=%d\n",a+=a+(b++));
    
    return 0;
}