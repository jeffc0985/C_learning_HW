#include <stdio.h>

int main()
{
    char* p = "We are the best friends!";
    int i, count = 0, low = 0;
    for(i=0;*p!='\0';i++)
    {
        count += 1;

        if(*p>=97 && *p<=122)
            low += 1;
        p++;
    }

    printf("指標p指向的字串有%d個字元,有%d個小寫字母",count,low);

    return 0;
}