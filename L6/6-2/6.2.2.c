#include <stdio.h>

int main()
{
    float height, weight;
    printf("請輸入身高、體重(以空格隔開):");
    scanf("%f %f",&height,&weight);

    if (weight>90 && height<180)
        printf("體重過重");
    else
        printf("不會過重");

    return 0; 
}