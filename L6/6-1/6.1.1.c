#include <stdio.h>

int main()
{
    char input;
    printf("請輸入一個字元:");
    scanf("%c",&input);

    if (input >= '0' && input <= '9')
        printf("此字元是數字");
    if (input >= 'a' && input <= 'z')
        printf("此字元是小寫字母");
    if (input >= 'A' && input <= 'Z')
        printf("此字元是大寫字母");
    
    return 0;
}