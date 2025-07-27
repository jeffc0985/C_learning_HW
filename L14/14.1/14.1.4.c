#include <stdio.h>
#include <stdlib.h>

struct data
{
    char name[20];
    int score;
};
typedef struct data DATA;

int main()
{
    int i, j, num;
    double sum = 0;

    printf("請輸入學生數量:");
    scanf("%d",&num);
    
    DATA* ptr = (DATA*) malloc(sizeof(DATA)*num);

    for(i=0;i<num;i++)
    {
        getchar();
        printf("姓名:");
        fgets((ptr+i)->name,20,stdin);

        for(j=0;(ptr+i)->name[j] != '\0';j++)
            if((ptr+i)->name[j] == '\n')
                (ptr+i)->name[j] = '\0';

        printf("分數:");
        scanf("%d",&(ptr+i)->score);
    }

    printf("********output********\n");

    for(i=0;i<num;i++)
    {
        printf("%s:%d分\n",(ptr+i)->name,(ptr+i)->score);
        sum += (ptr+i)->score;
    }

    printf("總分:%.2lf, 平均:%.2lf",sum,sum/num);
    free(ptr);

    return 0;
}