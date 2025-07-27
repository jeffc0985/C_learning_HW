#include <stdio.h>

int main()
{
    int i, j;
    int A[3][2] = {{1,7},{8,5},{9,6}};
    int min, max, min_i = 0, min_j = 0, max_i = 0, max_j = 0;
    min = max = A[0][0];

    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            {
                if(A[i][j]>max)
                    {
                        max = A[i][j];
                        max_i = i;
                        max_j = j;
                    }
                if(A[i][j]<min)
                    {
                        min = A[i][j];
                        min_i = i;
                        min_j = j;
                    }
            }
    printf("最大值為A[%d][%d]=%d\n",max_i,max_j,max);   
    printf("最小值為A[%d][%d]=%d\n",min_i,min_j,min);   
            
    return 0;
}