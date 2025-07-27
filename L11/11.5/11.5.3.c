#include <stdio.h>
#include <string.h>
#include <math.h>

#define SIZE 6

//建立結構陣列(學生、不及格學生)
struct data
{
    char name[10];
    double score;
}stu[SIZE], failed[SIZE];

//函數宣告
void display(struct data*);
void adjust(struct data*);
struct data max(struct data*);
double average(struct data*);
void display_f(struct data*);
void display_rank(struct data*);
 
int main()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("請輸入姓名:");
        scanf("%s",(stu+i)->name);
        printf("請輸入成績:");
        scanf("%lf",&(stu+i)->score);
    }
    printf("************output************\n");

    printf("調分前:\n");
    display(stu);
    printf("\n");
    
    adjust(stu);
    
    printf("調分後:\n");
    display(stu);
    printf("\n");

    display_f(stu);
    printf("\n");

    display_rank(stu);

    return 0;
}
//顯示人名與成績
void display(struct data* stu)
{
    int i;
    for(i=0;i<SIZE;i++)
        printf("%s %.2lf分\n",(stu+i)->name,(stu+i)->score);

    printf("最高分為:%s %.2lf分\n",max(stu).name,max(stu).score);
    printf("平均為:%.2lf分\n",average(stu));

}

//調分
void adjust(struct data* stu)
{
    int i;
    for(i=0;i<SIZE;i++)
        (stu+i)->score = sqrt((stu+i)->score)*10.0;
}

//找最大值並回傳結構
struct data max(struct data* stu)
{
    struct data max = {0,stu->score};
    strcpy(max.name,stu->name);
    
    int i;
    for(i=0;i<SIZE;i++)
        if((stu+i)->score > max.score)
        {
            max.score = (stu+i)->score;
            strcpy(max.name,(stu+i)->name);
        }
    return max;
}

//算平均並回傳值
double average(struct data* stu)
{
    int i, sum = 0;
    for(i=0;i<SIZE;i++)
        sum += (stu+i)->score;

    return (double)sum/SIZE;
}

//顯示調分後仍不及格者
void display_f(struct data* stu)
{
    int i, j = 0;
    for(i=0;i<SIZE;i++)
        if((stu+i)->score < 60)
        {
            *(failed+j) = *(stu+i);
            j++;
        }
    int f_count = j;

    printf("調分後仍不及格者有:\n");
    for(i=0;i<f_count;i++)
        printf("%s %.2lf分\n",(failed+i)->name,(failed+i)->score);
}

//顯示排名(氣泡排序)
void display_rank(struct data* stu)
{
    int i, j, complete = 0;
    double temp;
    char temp_name[10];
    struct data rank[SIZE];

    for(i=0;i<SIZE;i++)
        *(rank+i) = *(stu+i);   //複製結構陣列到rank

    for(i=1;i<SIZE && complete == 0;i++)
    {
        complete = 1;
        for(j=0;j<SIZE-i;j++)
        {
            if((rank+j)->score < (rank+(j+1))->score)
            {   
                complete = 0;

                temp = (rank+(j+1))->score;
                (rank+(j+1))->score = (rank+j)->score;
                (rank+j)->score = temp;

                strcpy(temp_name,(rank+(j+1))->name);
                strcpy((rank+(j+1))->name,(rank+j)->name);
                strcpy((rank+j)->name,temp_name);
            }            
        }
    }

    printf("總排名:\n");
    for(i=0;i<SIZE;i++)
        printf("第%d名為:%s %.2lf分\n",i+1,(rank+i)->name,(rank+i)->score);
}