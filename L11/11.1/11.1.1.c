#include <stdio.h>

int main()
{
    struct data
    {
        char ch;
        int num;
        double dist;
    }aaa;

    printf("sizeof(aaa)=%d\n",sizeof(aaa));
    printf("sizeof(struct data)=%d",sizeof(struct data));
    
    return 0;
}