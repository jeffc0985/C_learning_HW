#include <stdio.h>

int main()
{
    int num[5] = {31,69,10,87,55};
    int min, max, min_i = 0, max_i = 0;
    min = max = *(num);

    int i;
    for(i=0;i<5;i++)
    {
        if(*(num+i)>max)
        {
            max = *(num+i);
            max_i = i;
        }

        if(*(num+i)<min)
        {
            min = *(num+i);
            min_i = i;
        }
    }

    printf("max=num[%d]=%d, min=num[%d]=%d",max_i,max,min_i,min);
    return 0;
}