#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>
#include <io.h>
#include<fcntl.h>

#define SIZE 10

int find_max(int*);
int main()
{
    srand(time(NULL));

    int f1 = open("D:\\C_projects\\progfiles\\hw12.3.3.bin",O_WRONLY|O_BINARY|O_CREAT,S_IWRITE);
    int num[SIZE], i;

    if(f1 != -1)
    {
        for(i=0;i<SIZE;i++)
        {
            num[i] = (rand()%16)+1;
            write(f1,&num[i],sizeof(int));
        }
        close(f1);
    }
    else
        printf("檔案開啟失敗!");


    f1 = open("D:\\hw12.3.3.bin",O_RDONLY|O_BINARY);
    int num_rd[SIZE];
    double sum = 0;

    if(f1 != -1)
    {
        printf("隨機的數為:");
        for(i=0;i<SIZE;i++)
        { 
            read(f1,&num_rd[i],sizeof(int));
            printf("%d ",num_rd[i]);
            sum += num_rd[i];
        }

        find_max(num_rd);

        printf("\n最大值為:%d",find_max(num_rd));
        printf("\n平均為:%.2lf",sum/SIZE);
        close(f1);
    }
    else
        printf("檔案開啟失敗!");


    return 0;
}

int find_max(int* arr)
{
    int i;
    int max = arr[0];

    for(i=0;i<SIZE;i++)
        if(arr[i] > max)
            max = arr[i];

    return max;

}