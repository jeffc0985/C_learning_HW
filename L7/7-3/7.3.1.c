//2+4+...+n=?(do while)
#include <stdio.h>

int main()
{
    int i = 0, n, sum = 0;

    do
    {
        printf("請輸入一個正偶數n:");
        scanf("%d",&n);

    } while (n<2 || n%2!=0);

    while (i<=n)
    {
        sum += i;
        i += 2;
    }

    printf("2+4+...+n的和為:%d",sum);
    
    return 0;
}