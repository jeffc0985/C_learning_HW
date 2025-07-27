#include <stdio.h>

int main()
{
    int i;
    int arr[5];

    for(i=0;i<5;i++)
        {
            printf("請輸入arr[%d]的值:",i);
            scanf("%d",&arr[i]);
        }
    for(i=0;i<5;i++)
        printf("arr[%d]=%d\n",i,arr[i]);

    printf("陣列arr的大小為:%d",sizeof(arr));

    return 0;
}