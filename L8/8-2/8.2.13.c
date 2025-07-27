#include <stdio.h>

void f(int);
int three_pow(int);
int main()
{
    int n;
    printf("輸入一個n:");
    scanf("%d",&n);
    f(n);
    return 0;
}

void f(int n)
{
    int i, j;
    int k = n;
    for(i=1;i<=n;i++)
        {
            for(j=0;j<k;j++)
                printf("%d ",three_pow(j));
            printf("\n");
            k--;
        }

}

int three_pow(int n)
{
    int i, value = 1;
    for(i=1;i<=n;i++)
        value *= 3;
    return value;

}