//6的倍數
#include <stdio.h>

int main()
{
    int i;
    printf("1~100之間6的倍數有:");
    for(i=1;i<=100;i++)
        if(i%6==0)
            printf("%d ",i);

    return 0;
}