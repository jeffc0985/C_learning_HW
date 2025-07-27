#include <stdio.h>

int main()
{ 
    int score[10];
    int i = 0, num;
    while(i<10)
    {
        printf("請輸入成績(MAX =10 ,or -1 to exit):");
        scanf("%d",&score[i]);
        if(score[i] == -1)
            break;
        i++;
    }

    num = i;    //人數

    int min, max, sum = 0;
    int max_i = 0, min_i = 0;
    min = max = score[0];
    for(i=0;i<num;i++)
        {
            sum += score[i];
            if(score[i] > max)
                {   max = score[i];
                    max_i = i;
                }
            if(score[i] < min && score[i] != -1)
                {
                    min = score[i];
                    min_i = i;
                }
        }
    if(num != 0)    
    {
        printf("共%d筆資料\n",num);
        printf("總分:%d/平均:%f\n",sum,(float)sum/num);
        printf("最高分為arr[%d]=%d分\n",max_i,max);
        printf("最低分為arr[%d]=%d分\n",min_i,min);
    }
    else
        printf("無資料!");
    return 0;
}