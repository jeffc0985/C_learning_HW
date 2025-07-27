#include <stdio.h>

int main()
{
    float weight;
    printf("請輸入你的體重:");
    scanf("%f",&weight);

    if (weight>90)
        printf("體重過重");
    else
        printf("不會過重");

    return 0;
}