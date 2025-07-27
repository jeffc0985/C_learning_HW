#include <stdio.h>

int main()
{
    char ch;
    printf("女生請輸入a;男生請輸入b:");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'A':
            printf("你是女生");
            break;
        case 'b':
        case 'B':
            printf("你是男生");
            break;
        default:
            printf("輸入錯誤!");
            break;
    }
    return 0;
}