//呼叫函數n次
#include <stdio.h>

void kitty(int);
int main()
{   
    int n;
    printf("請輸入次數:");
    scanf("%d",&n);
    kitty(n);

    return 0;
}

void kitty(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("Hello kitty!\n");

}