//找第n個質數
#include <stdio.h>
#include <math.h>

int prime(int);
int main()
{
    int n;
    printf("請輸入整數n:");
    scanf("%d",&n);

    printf("第%d個質數為%d",n,prime(n));
    return 0;
}

int prime(int n)
{
    int i = 2, j, count = 0;
    while (count != n)
    {
        int a = 0;  //因數數量
        for(j=2;j<=sqrt(i);j++)
            {
                if(i%j == 0)
                {
                    a++;    
                    break;
                }
                
            }   //跳脫時找到一個以上或都沒找到
            if(a==0)    //若都沒找到
                { 
                    count += 1;
                }
        i++;    
    }
            
    return i-1;
}



