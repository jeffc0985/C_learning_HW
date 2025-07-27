//99乘法表(do while)
#include <stdio.h>

int main()
{
    int i = 1, j;

    do
    {
        j = 1;
        do
        {
            printf("%d*%d=%2d  ",i,j,i*j);
            j++;

        } while (j<=9);
        printf("\n");
        i++;

    } while (i<=9);
    
    return 0;
}