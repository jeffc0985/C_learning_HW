#include <stdio.h>

int main()
{
    FILE* fp_article = fopen("D:\\C_projects\\progfiles\\article.txt","r");
    FILE* fp_article_cpy = fopen("D:\\C_projects\\progfiles\\article_cpy.txt","w");

    int count = 0;
    char ch;

    if(fp_article != NULL && fp_article_cpy != NULL)
    {
        while ((ch=getc(fp_article)) != EOF)
        {
            putc(ch,fp_article_cpy);
            count++;
        }

        printf("檔案複製完成!\n");
        printf("文章共有%d個字元\n",count);
        fclose(fp_article);
        fclose(fp_article_cpy); 
    }
    else
        printf("檔案開啟失敗!");

    return 0;
}