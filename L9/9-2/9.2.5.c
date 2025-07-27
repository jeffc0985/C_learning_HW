#include <stdio.h>

void line();
int main()
{
    //4天3個時段溫度數據
    double weather[4][3] = {{18.2,23.8,20.6},{17.3,25.1,21.5},{15.0,20.6,18.4},{13.4,17.8,15.7}};
    double sumt_day[4] = {0};
    double sumt_time[3] = {0};
    int i, j;

    //印出陣列內容
    for(i=0;i<4;i++)  
        {
            for(j=0;j<3;j++)
                printf("星期%d時段%d的溫度為:%.2lf度\n",i+1,j+1,weather[i][j]);
            printf("\n");
        }

    line();
    
    //每日均溫
    for(i=0;i<4;i++)    
        for(j=0;j<3;j++)
            sumt_day[i] += weather[i][j];
           
    for(i=0;i<4;i++)
        printf("星期%d的日均溫為:%.2lf度\n",i+1,sumt_day[i]/3);

    line();

    //各時段均溫
    for(j=0;j<3;j++)
        for(i=0;i<4;i++)
            sumt_time[j] += weather[i][j];
            
    for(i=0;i<3;i++)
        printf("這週時段%d的均溫為:%.2lf度\n",i+1,sumt_time[i]/4);

    line();

    //最高溫/最低溫
    double max, min;
    int max_i = 0, min_i = 0, max_j = 0, min_j = 0;
    max = min = weather[0][0];
    for(i=0;i<4;i++)
        for(j=0;j<3;j++)
            {
                if(weather[i][j]>max)
                    {
                        max = weather[i][j];
                        max_i = i;
                        max_j = j;
                    }
                if(weather[i][j]<min)
                    {
                        min = weather[i][j];
                        min_i = i;
                        min_j = j;
                    }
            }
    printf("最高溫為:星期%d的時段%d---%.2lf度\n",max_i+1,max_j+1,max);
    printf("最低溫為:星期%d的時段%d---%.2lf度\n",min_i+1,min_j+1,min);

        
    return 0;
}

void line()
{
    printf("**************************\n");
}