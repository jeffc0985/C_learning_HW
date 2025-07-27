#include <stdio.h>
#include <io.h>
#include <sys/stat.h>
#include <fcntl.h>


#define MAX 256
int main()
{
    int f1 = open("D:\\C_projects\\progfiles\\article.txt",O_RDONLY|O_TEXT);
    int f2 = creat("D:\\C_projects\\progfiles\\article_cpy4.txt",S_IWRITE);
    char str[MAX];
    int count = 0, bytes;

    if(f1 != -1 && f2 != -1)
    {
        while ((bytes = read(f1,str,MAX)) > 0)
        {
            write(f2,str,bytes);
            printf("%.*s",bytes,str);
            count += bytes;
        }
        close(f1);
        close(f2);
        printf("\n檔案拷貝完畢!共%d字元",count);
    }
    else
        printf("檔案開啟失敗!");
        
    return 0;
}