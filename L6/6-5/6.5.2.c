//1900-2000的閏年
#include <stdio.h>

int main()
{
    int a = 1900, year;
    printf("介於1900年-2000年的閏年有:\n");

    start:
        a+=4;
        printf("%d年",a);

        if (a<1996)
            {
                printf("、");
                goto start;
            }

    return 0;
}