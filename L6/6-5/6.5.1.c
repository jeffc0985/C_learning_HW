//1-100奇數和
#include <stdio.h>

int main()
{
    int a = 1, i = 0,sum = 0;
    start:
        i++;
        printf("%d",a);
        sum = sum + a;
        a+=2;

        if (i<50)   //應該要49個加號
        {
            printf("+");
            goto start;
        }

    printf("=%d",sum);

    return 0;
}