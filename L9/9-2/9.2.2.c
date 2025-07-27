#include <stdio.h>

int main()
{
    int i, j;
    int A[4][3] = {{9,2,8},{1,8,6},{7,4,4},{3,5,2}};
    int B[4][3] = {{1,2,7},{1,0,12},{6,14,4},{0,8,2}};

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
            printf("%02d ",A[i][j]+B[i][j]);
        printf("\n");
    }

    return 0;
}