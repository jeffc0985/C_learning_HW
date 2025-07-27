#include <stdio.h>
#include <string.h>


void show_decimal(char*,int);
int power(int,int);

int main()
{
    int error;
    char str[20];

    do
    {
        error = 0;
        
        printf("請輸入二進制數字(最多16位):");
        fgets(str,20,stdin);        //最多讀20個避免溢位
        
        str[strcspn(str,"\n")] = '\0';      //把\n換\0
        
        if (strlen(str) > 16)
        {
            printf("格式錯誤!位數太多\n");
            error = 1;
        }
        
        int i;
        for (i=0 ; i<strlen(str) && error == 0 ; i++)
        if (str[i] != '0' && str[i] != '1')
        {
            printf("格式錯誤!數字含有0和1以外的字元\n");
            error = 1;
        }
        
    } while (error == 1);
      
    show_decimal(str,strlen(str));

    return 0;
}

void show_decimal(char* str,int len)
{
    int i, num = 0;
    for(i=0 ; i<len ; i++)
    {
        if(str[len-(i+1)] == '0')
            continue;
        else
            num += (str[len-(i+1)]-'0') * power(2,i);
    }

    printf("%d",num);
}

int power(int x, int n)
{
    int i, val = 1;
    for(i=1 ; i<=n ; i++)
        val *= x;

    return val;
}