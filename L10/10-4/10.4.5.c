#include <stdio.h>

int main()
{
    char str[2][20] = {"Time is money.","Have a good time!"};
    for(int i=0;i<2;i++)
        puts(*(str+i));
    return 0; 
}