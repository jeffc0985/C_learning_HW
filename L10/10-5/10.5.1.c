#include <stdio.h>

int main()
{
    int A[2][3] = {{1,4,6},{5,2,8}};
    int B[2][3] = {{7,0,6},{3,3,5}};

    int i, j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%3d",*(*(A+i)+j)+*(*(B+i)+j));
        printf("\n");
    }
    
    return 0;
}