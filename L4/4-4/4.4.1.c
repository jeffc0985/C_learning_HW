#include <stdio.h>

int main()
{
    int num;
    char ch;

    printf("輸入一個整數:");
    scanf(" %d",&num);
    getchar();

    printf("輸入一個字元:");
    ch = getchar();
    
    printf("the number is %d, and its ASCII is %d",num,ch);
    
    return 0;
}