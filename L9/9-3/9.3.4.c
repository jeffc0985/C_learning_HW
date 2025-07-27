#include <stdio.h>

#define ROW 3
#define COL 4
double av(int arr[][COL]);
int main()
{
    int A[ROW][COL] = {{5,8,14,7},{3,9,15,20},{17,4,11,16}};
    
    printf("二維陣列A所有元素的平均值為:%.2lf",av(A));
    

    return 0;
}

double av(int arr[][COL])
{
    int i, j, sum = 0;
    
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        {
            sum += arr[i][j];
        }
    
    return (float)sum/(ROW*COL);

}