#include <stdio.h>

void display(char*, int);
int main()
{
    int n;
    char str[100];
    printf("請輸入一字串:");
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++)
        if(str[i] == '\n')
            str[i] = '\0';

    printf("從第幾個字符開始印?");
    scanf("%d",&n);

    display(str,n);

    return 0;
}

void display(char* str,int n)
{
    puts(str+(n-1));
}