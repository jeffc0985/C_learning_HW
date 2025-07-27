#include <stdio.h>

int length(char str[]);
int main()
{
    char str[30];
    printf("請輸入字串:");
    fgets(str,30,stdin);    //fgets()會讀入\n

    printf("該字串有%d個字元",length(str));
    return 0;
}  

int length(char str[])
{
    int i, count = 0;

    for(i=0;str[i]!='\0';i++)   //先移除因Enter導致的換行字元
    if(str[i]=='\n')
        str[i] = '\0';

    for(i=0;str[i]!='\0';i++)
        count += 1;

    return count;

}