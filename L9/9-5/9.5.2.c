#include <stdio.h>

#define LENGTH 30
#define MAX 3
void copy_str(char arr[][LENGTH],char arr_cp[][LENGTH]);
int main()
{
    char str[MAX][LENGTH], str_py[MAX][LENGTH];

    int i, j;
    for(i=0;i<MAX;i++)
    {
        printf("請輸入字串:");
        fgets(str[i],30,stdin);
    }

    //剔除每個字串的\n
    for(i=0;i<MAX;i++)
        for(j=0;j<LENGTH;j++)
            if(str[i][j] == '\n')
                str[i][j] = '\0';

    copy_str(str,str_py);

    for(i=0;i<MAX;i++)
    {
        puts(str_py[i]);
    }

    
    return 0;
}

void copy_str(char arr[][LENGTH],char arr_cp[][LENGTH])
{
    int i, j;
    for(i=0;i<MAX;i++)
    {
        //複製每個字元
        for(j=0; arr[i][j]!='\0'; j++)
            arr_cp[i][j] = arr[i][j];

        //複製完結尾補\0  
        arr_cp[i][j] = '\0';          
    }

}