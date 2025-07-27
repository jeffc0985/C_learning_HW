#include <stdio.h>
 
int main()
{
    // 銷售資料：3位銷售員、5種產品
    int sale[3][5] = {{33,32,56,45,33},{77,33,68,45,23},{43,55,43,67,65}};
    int sum_people[3] = {0};   // 銷售員1~3的銷售總額
    int sum_product[5] = {0};  // 產品A~E的銷售總額
    int i, j;

    // 計算每位銷售員的銷售總額
    for(i=0;i<3;i++)
        for(j=0;j<5;j++)
            if(j == 0)
                sum_people[i] += 12*sale[i][j];   // 產品A單價12元
            else if(j == 1)
                sum_people[i] += 16*sale[i][j];   // 產品B單價16元
            else if(j == 2)
                sum_people[i] += 10*sale[i][j];   // 產品C單價10元
            else if(j == 3)
                sum_people[i] += 14*sale[i][j];   // 產品D單價14元
            else if(j == 4)
                sum_people[i] += 15*sale[i][j];   // 產品E單價15元
    // 輸出每位銷售員的銷售總額
    for(i=0;i<3;i++)
        printf("銷售員%d的銷售總額為:%d元\n",i+1,sum_people[i]);


    // 計算每種產品的銷售總額
    for(j=0;j<5;j++)
        for(i=0;i<3;i++)
            if(j == 0)
                sum_product[j] += 12*sale[i][j];
            else if(j == 1)
                sum_product[j] += 16*sale[i][j];
            else if(j == 2)
                sum_product[j] += 10*sale[i][j];
            else if(j == 3)
                sum_product[j] += 14*sale[i][j];
            else if(j == 4)
                sum_product[j] += 15*sale[i][j];

    // 輸出每種產品的銷售總額
    for(i=0;i<5;i++)
        printf("產品%c的銷售總額為:%d元\n",i+65,sum_product[i]);

    // 找出銷售總額最高的銷售員
    int max_p = 0;
    int max = sum_people[0];
    for(i=0;i<3;i++)
        if(sum_people[i]>max)
            {
                max = sum_people[i];
                max_p = i;                     //銷售總額最高的銷售員索引
            }
    printf("王牌銷售員為:銷售員%d\n",max_p+1);  //編號=索引+1

    // 找出銷售總額最高的產品
    int max_product = 0;
    max = sum_product[0];
    for(i=0;i<5;i++)
        if(sum_product[i]>max)
            {
                max = sum_product[i];
                max_product = i;                //銷售總額最高的產品索引  
            }
    printf("銷量最佳為:產品%c\n",max_product+65);//索引+65=ASCII of 編號 

    // 計算總銷售額
    int total = 0;
    for(i=0;i<3;i++)
        total += sum_people[i];
    printf("總銷售額為:%d元\n",total);           

    return 0;
}