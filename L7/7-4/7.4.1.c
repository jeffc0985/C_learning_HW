//數字金字塔
#include <stdio.h>

int main()
{
    int i, j, k, n;

    printf("請輸入數字n(1~9):");
    scanf("%d",&n);

    int blank = n-1;
    
    for(i=1;i<=n;i++)       //層數
    {   
        for(k=blank;k>0;k--)        //第n層有n-1個空白
            printf(" ");
            
        for(j=1;j<=i;j++)           //第n層數字1~n
            printf("%d",j);

        printf("\n");               //print 完一層換行
        blank -= 1;                 //下一層空白少1個
    }

    return 0;
}