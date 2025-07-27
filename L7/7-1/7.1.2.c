//print出ASCII41~64的字元
#include <stdio.h>

int main()
{
    int i;
    char ch = 41;
    for(i=41;i<=64;i++)
        {
            printf("%c\n",ch);
            ch += 1;
        }

    return 0;
}