#include <stdio.h>

#define ROW 3
#define COL 4
void search(int arr[][COL],int*);
int main()
{
    int num[ROW][COL] = {{25,14,78,26},{13,10,2,1},{78,5,63,99}};
    int B[2];
    search(num,B);
    printf("max=%d, min=%d",B[1],B[0]);

    return 0;
}

void search(int arr[][COL],int* b)
{
    int i, j;
    *(b+0) = *(b+1) = **arr;
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        {
            if(*(*(arr+i)+j)>*(b+1))
                *(b+1) = *(*(arr+i)+j);

            if(*(*(arr+i)+j)<*(b+0))
                *(b+0) = *(*(arr+i)+j);
        }
    

}