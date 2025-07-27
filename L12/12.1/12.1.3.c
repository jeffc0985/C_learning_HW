#include <stdio.h>
#include <string.h>

#define MAX 100
int main()
{
    FILE* fp_article = fopen("D:\\C_projects\\progfiles\\article.txt","r");
    FILE* fp_article_py = fopen("D:\\C_projects\\progfiles\\article_cpy2.txt","w");
    char str[MAX];
    int count = 0;

    if(fp_article != NULL && fp_article_py != NULL)
    {
        while (fgets(str,MAX,fp_article) != NULL)
        {
            fputs(str,fp_article_py);
            count += strlen(str);
        }
        fclose(fp_article);
        fclose(fp_article_py);
        puts("檔案複製完成!");
        printf("文章共有%d個字元",count);
    }
    else
        printf("檔案開啟失敗!");
        
    return 0;
}