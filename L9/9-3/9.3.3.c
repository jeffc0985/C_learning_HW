#include <stdio.h>

void count(int arr[],int);

int main()
{
    int i, size = 0;    //實際輸入的個數
    int A[10];

    for(i=0;i<10;i++)
    {
        printf("請輸入整數(or -1 to exit):");
        scanf("%d",&A[i]);
        
        if(A[i] == -1)
            break; 
        size++;
    }

    count(A,size);

    return 0;
}

void count(int arr[],int size)
{
    int sing = 0, pl = 0, i;

    for(i=0;i<size;i++)
    {
        if(arr[i] %2 == 0)
            pl += 1;
        if(arr[i] %2 != 0)
            sing += 1;
    }
    
    printf("陣列arr中,奇數個數為:%d\n",sing);
    printf("陣列arr中,偶數個數為:%d\n",pl);
}