#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int* ptr = (int*) malloc(sizeof(int));

    printf("請輸入整數:");
    scanf("%d",ptr);

    printf("%d的平方為:%d",*ptr,(*ptr)*(*ptr));

    free(ptr);

    return 0;
}