#include <stdio.h>

void square(int*);
int main()
{
    int num[5] = {1,2,3,4,5};
    int i;

    printf("呼叫前,num[5]的元素為:");
    for(i=0;i<5;i++)
        printf("%2d ",num[i]);
    
    square(num);

    printf("\n");
    
    printf("呼叫後,num[5]的元素為:");
    for(i=0;i<5;i++)
        printf("%2d ",num[i]);

    return 0;
}

void square(int* arr)
{
    int i;
    for(i=0;i<5;i++)
        arr[i] *= i+1;

}