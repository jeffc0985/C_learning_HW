//找第n個梅森質數
#include <stdio.h>
#include <math.h>

int M_prime(int);
int power(int,int);
int main()
{
    int i, n;
    printf("請輸入正整數n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("第%d個梅森質數為:%d\n",i,M_prime(i));   //依序print出第1~n個梅森質數
    return 0;
}

int M_prime(int n)
{
    int i = 2, j;   //每次呼叫都從2開始檢測
    int count = 0;  //count 初始化
    while (1)
    {
        int is_prime = 1;
        for(j=2;j<=sqrt(i);j++)
            if(i%j == 0)
                {
                    is_prime = 0;   //非質數直接檢測下一個
                    break;
                }
        if(is_prime == 1)
            {
                int p = 1;  //從2^1-1開始夾
                while (1)
                {   
                    if(power(2,p)-1<=i && power(2,p+1)-1>i) //夾到了
                        if(power(2,p)-1 == i)   //如果此質數符合2^p-1
                        {
                            count += 1;         //記為第一個梅森質數
                            if(count == n)
                                return i;       //找到第n個直接返回此質數
                            else
                                break;          //不是第n個就break,檢測下個數
                        }
                        else
                            break;              //如果不符合2^p+1就break,檢測下個數
                    p++;
                }                               //沒夾到就找更大的p繼續夾
                
            }
        i++;
    }
    



}

int power(int x,int n)
{
    int i, value = 1;

    for(i=1;i<=n;i++)
       value *= x;

    return value;
}