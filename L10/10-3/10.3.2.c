//指標的運算優先度大於取址
#include <stdio.h>

int main()
{
    int num[3] = {10,20,30};

    int* p1, *p2;
    p1 = p2 = num;

    *p1++;
    printf("*p1=%d\n",*p1); //20

    (*p2)++;
    printf("*p2=%d\n",*p2); //11
    return 0;
}