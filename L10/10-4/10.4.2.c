#include <stdio.h>

int length(char*);
int main()
{
    char word[100];
    printf("請輸入字串:");
    fgets(word,100,stdin);

    int i;
    for(i=0;word[i]!='\0';i++)
        if(word[i] == '\n')
            word[i] = '\0';

    char* p = word;
    printf("你輸入的字串有%d個字元",length(word));

    return 0;
}

int length(char* str)
{
    int len = 0;
    while(*str != '\0')
    {
        len += 1;
        str++;      //注意此處的srt++是把str的地址送進來做運算
    }               //跟指標常數的值不能改變不衝突
    
    return len;
}