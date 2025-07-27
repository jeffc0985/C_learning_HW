#include <stdio.h>

#define ROW 2
#define COL 3

void add(int a[][COL],int b[][COL],int c[][COL]);
int main()
{
    int A[ROW][COL] = {{8,5,4},{7,9,6}};
    int B[ROW][COL] = {{1,9,0},{3,2,4}};
    int C[ROW][COL];
    
    add(A,B,C);

    int i, j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
            printf("%2d ",C[i][j]);
        printf("\n");
    }
    return 0;
}

void add(int a[][COL],int b[][COL],int c[][COL])
{
    int i, j;
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
            c[i][j] = a[i][j] + b[i][j];
}