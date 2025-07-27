//孫子算經
#include <stdio.h>

int find(int);
int main()
{
    int n, m, i;
    printf("請輸入一個整數:");
    scanf("%d",&n);
    printf("滿足\"孫子算經\"的第%d個數為:%d\n",n,find(n));

    printf("再輸入一個整數:");
    scanf("%d",&m);

    printf("滿足\"孫子算經\"的前%d個數為:\n",m);
    for(i=1;i<=m;i++)
        printf("%d ",find(i));
    return 0;
}

int find(int n)
{
    int i = 1, count = 0;
    while (count != n)
    {
        if(i%3==2 && i%5==3 && i%7==2)
            count += 1;
        i++;
    }
    
    return i-1;

}