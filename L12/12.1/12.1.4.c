#include <stdio.h>
#include <string.h>

#define MAX 10
int main()
{
    FILE* fp_word1 = fopen("D:\\C_projects\\progfiles\\word1.txt","r");
    FILE* fp_word2 = fopen("D:\\C_projects\\progfiles\\word2.txt","r");
    FILE* fp_word = fopen("D:\\C_projects\\progfiles\\word.txt","w");
    char str[MAX]; 
    int count = 0;

    if(fp_word1 != NULL && fp_word2 != NULL && fp_word != NULL)
    {
        //寫入word1
        while (fgets(str,MAX,fp_word1) != NULL)
        {
            fputs(str,fp_word);
            count += strlen(str);
        }

        //換行
        putc('\n',fp_word);
        count++;

        //寫入word2
        while (fgets(str,MAX,fp_word2) != NULL)
        {
            fputs(str,fp_word);
            count += strlen(str);
        }
        fclose(fp_word1);
        fclose(fp_word2);
        fclose(fp_word);
        printf("檔案複製完成!共%d字元",count);
    }
    else
        printf("檔案開啟失敗!");        

    return 0;
}