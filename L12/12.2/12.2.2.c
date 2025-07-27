#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
int main()
{ 
    srand(time(NULL));

    int f1 = creat("D:\\C_projects\\progfiles\\random.txt",S_IWRITE);
    int num[SIZE], num_rd[SIZE];
    double sum;
    int i;

    if(f1 != -1)
    {
        for(i=0;i<SIZE;i++)
        {
            num[i] = (rand()%64)+1;
            write(f1,&num[i],sizeof(int));
        }
        close(f1);
    }
    else
        printf("檔案開啟失敗!");


    f1 = open("D:\\random.txt",O_RDONLY);

    if(f1 != -1)
    {
        printf("隨機的數為:");
        for(i=0;i<SIZE;i++)
        {
            read(f1,&num_rd[i],sizeof(int));
            printf("%d ",num_rd[i]);
            sum += num_rd[i];
        }
        printf("\n平均為:%.2lf",sum/SIZE);
        close(f1);
    }
    else
        printf("檔案開啟失敗!");

    return 0;
}