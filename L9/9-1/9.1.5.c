#include <stdio.h>

int main()
{
    int i;
    float arr[5];

    for(i=0;i<5;i++)
    {
        printf("請輸入arr[%d]的值:",i);
        scanf("%f",&arr[i]);
    }

    float sum;
    for(i=0;i<5;i++)
        sum += arr[i];

    printf("arr中的元素和為:%.3f\n",sum);
    printf("平均為:%.3f\n",sum/5);

    return 0;
}