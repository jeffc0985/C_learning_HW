#include <stdio.h>

int main()
{
    int i;
    char name[][11] = {"C language","C++","Java"};
    for(i=0;i<3;i++)
        puts(name[i]);
        //printf("%s\n",name[i]);

    return 0;
}