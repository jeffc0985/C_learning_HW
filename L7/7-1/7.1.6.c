//公倍數
#include <stdio.h>

int main()
{
    int i;
    printf("1~100中,3和7的公倍數為:");
    for(i=1;i<=100;i++)

        if(i%3==0 && i%7==0)
            printf("%d ",i);

    return 0;
}