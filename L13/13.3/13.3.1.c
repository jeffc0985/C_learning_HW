#include <stdio.h>

#define STR "Hello C language!"
int main()
{
    #ifndef STR
        printf("STR undefined!");
    #else
        printf(STR);
    #endif
    
    return 0;
}