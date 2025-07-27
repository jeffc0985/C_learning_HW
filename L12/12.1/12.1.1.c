#include <stdio.h>

int main()
{
    FILE* fptr = fopen("D:\\C_projects\\progfiles\\output.txt","r");
    char str[100];

    if(fptr != NULL)
    {
        while (fgets(str,5,fptr) != NULL)
        {
            printf("%s",str);
        }    

        fclose(fptr);
    }
    else
        printf("檔案開啟失敗!");
        
    return 0;
}