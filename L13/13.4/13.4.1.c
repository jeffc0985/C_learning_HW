#include <stdio.h>

int main(int argc, char* argv[])
{
    int i;
    for(i=1;i<argc;i++)
        printf("ASCII of %c is %d\n",argv[i][0],argv[i][0]);

    return 0;
}