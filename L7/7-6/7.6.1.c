//找質數
#include <stdio.h>

int main()
{
    int i, j, n, count;

    do
    {
        printf("請輸入一個正整數:");
        scanf("%d",&n);
    } while (n<1);

    for(i=1;i<=n;i++)
        {   
            count = 0;
            for(j=1;j<=i;j++)
                if (i%j==0)
                    count += 1;     
        }
    if (n==1)
        printf("1不是質數,也不是合數");

    else if (count == 2)
            printf("此數是質數");
        else
            printf("此數為合數");

    return 0;
}