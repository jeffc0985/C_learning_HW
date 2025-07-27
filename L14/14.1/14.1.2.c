#include <stdio.h>
#include <stdlib.h>

int main()
{
    double* ptr = (double*) malloc(3*sizeof(double));

    int i;
    double sum = 0;
    for(i=0;i<3;i++)
    {
        printf("請輸入值:");
        scanf("%lf",(ptr+i));
        sum += *(ptr+i);
    }

    for(i=0;i<3;i++)
    {
        printf("%.2lf ",*(ptr+i));
    }

    free(ptr);

    printf("\nsum=%.2lf\n",sum);
    printf("average=%.2lf",sum/3);

    return 0;
}