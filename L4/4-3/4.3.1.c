//string有空格的處理方式(基礎)
#include <stdio.h>

int main()
{
    char str[25], str2[25], str3[25];

    printf("Input a string:");
    scanf("%s",str);
    scanf("%s",str2);
    scanf("%s",str3);
    printf("The string is:%s %s %s",str,str2,str3);

    return 0;
}