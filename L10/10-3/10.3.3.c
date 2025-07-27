#include <stdio.h>

int main()
{
    int num[5] = {10,20,30,40,50};
    int* p = num;

    //指針變數p可改變值
    int i;
    for(i=0;i<5;i++)
    {
        *p += 10;
        printf("num[i]=%d\n",*p);
        p++;
    }

    //指針常數num只能做運算
    // int i;
    // for(i=0;i<5;i++)
    // {
    //     *(num+i) += 10;
    //     printf("num[i]=%d\n",*(num+i));
    //     
    // }

    return 0;
}