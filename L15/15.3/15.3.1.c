#include <stdio.h>

int main()
{
    struct data
    {
        unsigned sex : 1;
        unsigned marriage : 1;
        unsigned age : 7;
        unsigned money : 24;
    }Jeff;
    
    size_t data[4];

    printf("請輸入性別:");
    scanf("%d",&data[1]);
    printf("請輸入婚姻狀況:");
    scanf("%d",&data[2]);
    printf("請輸入年齡:");
    scanf("%d",&data[3]);
    printf("請輸入資產:");
    scanf("%d",&data[4]);

    Jeff.sex = data[1];
    Jeff.marriage = data[2];
    Jeff.age = data[3];
    Jeff.money = data[4];

    printf("Jeff:");
    if (Jeff.sex == 1)
        printf("性別:男\n");
    else
        printf("性別:女\n");

    if (Jeff.marriage == 1)
        printf("已婚\n");
    else
        printf("未婚\n");
    
    printf("年齡:%d\n",Jeff.age);
    printf("資產:%d\n",Jeff.money);

    printf("sizeof(Jeff)=%d",sizeof(Jeff));     //33bits > 32 -->8bytes

    return 0;
}