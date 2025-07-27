#include <stdio.h>

int* find_max(int*);
int main()
{
    int num[5] = {12,46,52,99,3};
    int* p = find_max(num);

    printf("num[]中最大值為:%d",*p);

    return 0;
}

int* find_max(int* arr)
{
    int i;
    int* max = arr;
    for(i=1;i<5;i++)
        if(*(arr+i)>*arr)
            max = arr+i;

    return max;

}