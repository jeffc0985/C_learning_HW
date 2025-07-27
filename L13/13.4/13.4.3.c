#include <stdio.h>

int main(int argc, char* argv[])
{
    char ch;
    FILE* fptr = fopen(argv[1],"r");

    if(argc == 2)
    {
        if(fptr != NULL)
        {
            while((ch = getc(fptr)) != EOF)
                printf("%c",ch);
            
            fclose(fptr);
        }
        else
            printf("Open failed");
    }
    else
        printf("Check ur format");

    return 0;
}