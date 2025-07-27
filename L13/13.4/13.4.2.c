#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{   
    int count, i;
    if(argc == 2)
    {
        count = atoi(argv[1]);

        for(i=1;i<=count;i++)
            printf("Hello C!\n");
    }
    else
        printf("請輸入正確格式!");
        
        
    return 0;
}