//座標判斷
#include <stdio.h>

int main()
{
    float a, b;
    printf("請輸入座標(例如3,6):");
    scanf("%f,%f",&a,&b);

    if (a>0 && b>0)
        printf("該點在第一象限");
    else if (a<0 && b>0)
        printf("該點在第二象限");
        else if (a<0 && b<0)
            printf("該點在第三象限");
            else if (a>0 && b<0)
                printf("該點在第四象限");
                else if (b==0 && a!=0)
                    printf("該點在x軸上");
                    else if (a==0 && b!=0)
                        printf("該點在y軸上");
                        else 
                            printf("該點在原點");


    return 0;
}