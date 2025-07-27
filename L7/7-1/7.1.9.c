//1-10000完美數
#include <stdio.h>

int main()
{
    int i, j, sum;

    printf("1~10000的完美數有:");

    for(i=1;i<=10000;i++)
        {
            sum = 0;
            for(j=1;j<i;j++)
                if(i%j==0)
                    sum = sum + j;
            if(sum==i)   
                printf("%d ",i);                
        }
        
    return 0;
}