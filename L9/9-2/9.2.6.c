#include <stdio.h>

int main()
{
    int A[4][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}},{{13,14,15},{16,17,18}},{{19,20,21},{22,23,24}}};
    int i, j, k, total = 0;
    for(i=0;i<4;i++)
        for(j=0;j<2;j++)
            for(k=0;k<3;k++)
                total += A[i][j][k];

    printf("陣列A中所有元素的值為:%d",total);
    
    return 0;
}