//陣列元素新增
#include <stdio.h>
#include <stdlib.h>

int InsertNum(int**,int,int,int);
void show_arr(int*);

int length;

int main()
{
    int num, pos;
    
    printf("請輸入陣列長度:");
    scanf("%d",&length);

    int* arr = (int*) malloc(sizeof(int)*length);

    int i;
    for(i=0;i<length;i++)
    {
        printf("請輸入arr[%d]的值:",i);
        scanf("%d",(arr+i));
    }

    show_arr(arr);

    printf("請輸入插入的值:");
    scanf("%d",&num);
    printf("請輸入插入的位置索引(arr[n]):");
    scanf("%d",&pos);

    int j = InsertNum(&arr,num,pos,length);

    if(j == -1)
    {
        printf("請重新輸入!");
        free(arr);
        return 0;
    }
    
    show_arr(arr);
    free(arr);

    return 0;
}

int InsertNum(int* (*arr),int num,int pos,int len)
{
    if(pos > len || pos < 0)
    {
        printf("位置格式錯誤!\n");
        return -1;
    }

    length += 1;
    int* temp = realloc(*arr,sizeof(int)*length);

    if(temp == NULL)
    {
        printf("記憶體分配失敗!\n");
        return -1;
    }

    (*arr) = temp;

    int i;
    for(i=len ; i>pos ; i--)
        (*arr)[i] = (*arr)[i-1];

    (*arr)[pos] = num;

    return 0;

}

void show_arr(int* arr)
{
    printf("陣列為:");
    
    int i;
    for(i=0;i<length;i++)
        printf("%d ",*(arr+i));

    printf("\n");
}