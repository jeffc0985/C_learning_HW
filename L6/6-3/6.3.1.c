//條件運算子?:
#include <stdio.h>

int main()
{
    int weight;
    printf("請輸入體重:");
    scanf("%d",&weight);
    
    weight>90? printf("體重過重") : printf("不會過重");

    return 0;
}