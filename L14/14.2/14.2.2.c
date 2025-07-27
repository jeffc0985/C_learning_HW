//陣列元素刪除
#include <stdio.h>
#include <stdlib.h>

void show(int*,int);
int DeleteNum(int**,int,int);


int main()
{
    int length;
    printf("請輸入陣列長度:");
    scanf("%d",&length);

    int* arr = (int*) malloc(sizeof(int)*length);

    int i, num;
    for(i=0 ; i<length ; i++)
    {
        printf("請輸入arr[%d]的值:",i);
        scanf("%d",(arr+i));
    }

    show(arr,length);

    printf("請輸入要刪除的數:");
    scanf("%d",&num);

    length = DeleteNum(&arr,num,length);
    if(length == -1)
    {
        printf("請重新輸入!");
        free(arr);
        return -1;
    }

    if(length == 0)
    {
        printf("陣列已清空!");
        free(arr);
        return 0;

    }

    show(arr,length);
    free(arr);

    return 0;
}
 
int DeleteNum(int** arr,int num,int len)
{
    int i, j, count = 0;
    
    
    for(i=0 ; i<len ; i++)
    if(*((*arr)+i) == num)  //(*arr)[i]
    {
        j = i;
        break;
    }
    else    
    count += 1;
    
    if(count == len)
    {
        printf("數字不在陣列中!\n");
        return -1;
    }
    
    len -= 1;

    if(len == 0)
    {
        return 0;
    }

    for(i=j ; i<len ; i++)
        (*arr)[i] = (*arr)[i+1];

    int* temp = (int*) realloc(*arr,sizeof(int)*len);

    if(temp == NULL)
    {
        printf("記憶體分配失敗!\n");
        return -1;
    }

    (*arr) = temp;


    return len;
}

void show(int* arr, int len)
{
    printf("陣列為:");

    int i;
    for(i=0 ; i<len ; i++)
        printf("%d ",*(arr+i));

    printf("\n");
}