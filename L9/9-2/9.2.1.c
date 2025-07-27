#include <stdio.h>

int main()
{
    int i, j, total = 0;
    int sale[2][4];
    int sum_season[4] = {0};    //陣列元素初始化
    int sum_people[2] = {0};
    
    for(i=0;i<2;i++)
        for(j=0;j<4;j++)
            {
                printf("請輸入銷售員%d第%d季的業績:",i+1,j+1);
                scanf("%d",&sale[i][j]);
            }

    printf("**********output**********\n");

    for(j=0;j<4;j++)
        for(i=0;i<2;i++)
            sum_season[j] += sale[i][j];    //用陣列存每一季的總和,不要用變數           
    for(j=0;j<4;j++)
        printf("第%d季的銷售量為:%d\n",j+1,sum_season[j]);


    for(i=0;i<2;i++)
        for(j=0;j<4;j++)
            sum_people[i] += sale[i][j];
    for(i=0;i<2;i++)
        printf("銷售員%d的總銷售量為:%d\n",i+1,sum_people[i]);

    
    for(i=0;i<2;i++)
        for(j=0;j<4;j++)
            total += sale[i][j];
    printf("總銷售額為:%d\n",total);              

    return 0;
}

//用變數存沒有效率
// int sum_s1 = 0, sum_s2 = 0, sum_s3 = 0, sum_s4 = 0;
// for(j=0;j<4;i++)
// {
//     for(i=0;i<2;i++)
//         switch (j)
//         {
//             case 0:
//                 sum_s1 += sale[i][j];
//                 break;                  
//             case 1:
//                 sum_s2 += sale[i][j];
//                 break;            
//             case 2:
//                 sum_s3 += sale[i][j];
//                 break;                   
//             case 3:
//                 sum_s4 += sale[i][j];
//                 break;                
//         }        
// }
        
// printf("第一季的銷售量為:%d\n",sum_s1);
// printf("第二季的銷售量為:%d\n",sum_s2);
// printf("第三季的銷售量為:%d\n",sum_s3);
// printf("第四季的銷售量為:%d\n",sum_s4);