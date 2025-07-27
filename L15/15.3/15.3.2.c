#include <stdio.h>

int main()
{
    struct status
    {
        unsigned sex : 1;
        unsigned marriage : 1;
        unsigned age : 7;
        unsigned height : 8;
        unsigned weight : 8;
    }Amy = {0,0,9,162,50};

    printf("Amy:\n");
    if (Amy.sex == 1)
        printf("性別:男\n");
    else
        printf("性別:女\n");

    if (Amy.marriage == 1)
        printf("已婚\n");
    else
        printf("未婚\n");
    
    printf("年齡:%d\n",Amy.age);
    printf("身高:%d\n",Amy.height);
    printf("體重:%d\n",Amy.weight);

    printf("sizeof(Amy)=%d",sizeof(Amy));  //4
    return 0;
}