#include <stdio.h>

#define SIZE 4
int main()
{
    int arr[SIZE] = {12,4,5,6};
    int a = 12, b = 16;

    FILE* fptr = fopen("D:\\C_projects\\progfiles\\hw12.3.1.bin","wb");
    if(fptr != NULL)
    {
        fwrite(arr,sizeof(int),SIZE,fptr);
        fwrite(&a,sizeof(int),1,fptr);
        fwrite(&b,sizeof(int),1,fptr);
        fclose(fptr);
    }
    else
        printf("檔案開啟失敗!");

    fptr = fopen("D:\\hw12.3.1.bin","rb");
    int arr_rd[SIZE];
    int a_rd, b_rd;
    int i;

    if(fptr != NULL)
    {
        fread(arr_rd,sizeof(int),SIZE,fptr);
        fread(&a_rd,sizeof(int),1,fptr);
        fread(&b_rd,sizeof(int),1,fptr);

        for(i=0;i<SIZE;i++)
            printf("arr_rd[%d]=%d\n",i,arr_rd[i]);
        
        printf("a_rd=%d\n",a_rd);
        printf("b_rd=%d\n",b_rd);

        fclose(fptr);
    }
    else
        printf("檔案開啟失敗!");


    return 0;
}