#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double* ptr[3];
    double sum = 0;

    for(i=0;i<3;i++)
    {
        ptr[i] = (double*) malloc(sizeof(double));
        printf("請輸入值:");
        scanf("%lf",ptr[i]);

        sum += *(ptr[i]);
    }

    for(i=0;i<3;i++)
    {
        printf("%.2lf ",*(ptr[i]));
        free(ptr[i]);
    }

    printf("\nsum=%.2lf\n",sum);
    printf("average=%.2lf",sum/3.0);

    return 0;
}