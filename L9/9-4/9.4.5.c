#include <stdio.h>

void reverse(char str[]);
int main()
{
    char str[100];
    printf("請輸入字串:");
    fgets(str,100,stdin);

    reverse(str);

    return 0;
}

void reverse(char str[])
{
    int i, j, count = 0;
    //剔除換行字元
    for(i=0;str[i]!='\0';i++)
        if(str[i] == '\n')
            str[i] = '\0';

    //計算字串長度
    for(i=0;str[i]!='\0';i++)
        count += 1;

    //建立反字串陣列
    char re_str[100];

    j = count-1;    //索引值
    for(i=0;i<count;i++)
    {
        re_str[i] = str[j];
        j--;
    }

    re_str[count] = '\0';   //補上\0
    puts(re_str);
}