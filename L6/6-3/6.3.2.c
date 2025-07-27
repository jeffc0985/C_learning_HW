#include <stdio.h>

int main()
{
    int weight, height;
    printf("請輸入身高:");
    scanf("%d",&height);
    printf("請輸入體重:");
    scanf("%d",&weight);

    weight>90 && height<180? printf("體重過重!"):printf("不會過重!");
    
    return 0;
}