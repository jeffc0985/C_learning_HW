#include <stdio.h>

int main()
{
    char* p[3] = {"Tom","Jeff chen","Amy123"};
    int i, j, len = 0;

    for(i=0;i<3;i++)
    {
        for(j=0;*(p[i]+j) != '\0';j++)  
            len += 1;
        len++;      //補上\0
    }

    printf("三個字串(含\\0)佔了%dBytes",len);
    return 0;
}