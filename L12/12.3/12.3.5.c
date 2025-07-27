#include <stdio.h>

int main()
{
    int arr[] = {11326,4445,15589,23740,76840};

    FILE* fptr_t = fopen("D:\\C_projects\\progfiles\\hw12.3.5.txt","w");
    FILE* fptr_b = fopen("D:\\C_projects\\progfiles\\hw12.3.5.bin","wb");

    int i;
    if(fptr_b != NULL && fptr_t != NULL)
    {
        for(i=0;i<5;i++)
        {
            fprintf(fptr_t,"%d ",arr[i]);
            fwrite(&arr[i],sizeof(arr[i]),1,fptr_b);
        }

        printf("檔案複製完畢!");
        fclose(fptr_t);
        fclose(fptr_b);
    }
    else
        printf("檔案開啟失敗!");

    return 0;
}