//求絕對值
#include <stdio.h>

int main()
{
    int num;
    printf("請輸入一整數:");
    scanf("%d",&num);

    if (num>=0)
        printf("絕對值為:%d",num);

    if (num<0)
        {
        num = -num;
        printf("絕對值為:%d",num);
        }
    return 0;
}
//if 有兩行以上記得大括弧

//alternative:(better)
// int main()
// {
//     int num;
//     printf("請輸入一整數:");
//     scanf("%d",&num);

//     if (num<0)
//         num = -num;

//     printf("絕對值為:%d",num);
//     return 0;
// }
