#include <stdio.h>

void to_lower(char arr[]);
int main()
{
    char str[30];
    printf("請輸入字串:");
    fgets(str,30,stdin);

    to_lower(str);

    return 0;
}

void to_lower(char arr[])
{   
    int i;
    for(i=0;arr[i]!='\0';i++)
        if(arr[i]>=65 && arr[i]<=91)
            arr[i] += 32;
    //1.用puts()直接將字串丟出
    puts(arr);
            
    //2.印整個字串
    //printf("%s",arr);

    //3.一個一個印字元
    // for(i=0;arr[i]!='\0';i++)
    //     printf("%c",arr[i]);

}