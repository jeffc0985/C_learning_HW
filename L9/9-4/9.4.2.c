#include <stdio.h>

int main()
{
    char str[30];
    printf("請輸入一個字串:");
    fgets(str,30,stdin);
    //scanf("%s",str);  用這個讀到空白就會結束,所以結果不對
    
    int i;
    int alphabet[5] = {0};
    for(i=0; str[i]!='\0'; i++) //讀到\0就停
        if(str[i] == 'a')
            alphabet[0]++;
        else if(str[i] == 'e')
            alphabet[1]++;
        else if(str[i] == 'i')
            alphabet[2]++;
        else if(str[i] == 'o')
            alphabet[3]++;
        else if(str[i] == 'u')
            alphabet[4]++;
    
    printf("英文字母a/e/i/o/u各出現");
    for(i=0;i<5;i++)
        printf("%d ",alphabet[i]);
    printf("次");
    
    return 0;
    
}