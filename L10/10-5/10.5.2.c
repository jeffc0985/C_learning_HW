#include <stdio.h>

#define ROW 3
#define COL 4
void search(int arr[][COL]);
int main()
{
    int num[ROW][COL] = {{25,14,78,26},{13,10,2,1},{78,5,63,99}};
    search(num);

    return 0;
}

void search(int arr[][COL])
{
    int i, j;
    int max, min;
    max = min = **arr;
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        {
            if(*(*(arr+i)+j)>max)
                max = *(*(arr+i)+j);

            if(*(*(arr+i)+j)<min)
                min = *(*(arr+i)+j);
        }
    printf("max=%d, min=%d",max,min);
    

}