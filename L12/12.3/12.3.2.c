#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>

#define SIZE 4
int main()
{
    int f1 = open("D:\\C_projects\\progfiles\\hw12.3.2.bin",O_BINARY|O_CREAT|O_WRONLY,S_IWRITE);
    int arr[SIZE] = {12,3,4,5};
    int a = 10, b = 16;

    if(f1 != -1)
    {
        write(f1,arr,sizeof(arr));
        write(f1,&a,sizeof(int));
        write(f1,&b,sizeof(int));

        close(f1);
    }
    else
        printf("檔案開啟失敗!");


    f1 = open("D:\\hw12.3.2.bin",O_BINARY|O_RDONLY);
    int arr_rd[SIZE], a_rd, b_rd, i;
    if(f1 != -1)
    {
        read(f1,arr_rd,sizeof(arr_rd));
        read(f1,&a_rd,sizeof(int));
        read(f1,&b_rd,sizeof(int));

        for(i=0;i<SIZE;i++)
            printf("arr_rd[%d]=%d\n",i,arr_rd[i]);

        printf("a_rd=%d\n",a_rd);
        printf("b_rd=%d\n",b_rd);

        close(f1);
    }
    else
        printf("檔案開啟失敗!");
        
    return 0;

}