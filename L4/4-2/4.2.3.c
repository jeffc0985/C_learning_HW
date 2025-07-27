#include <stdio.h>

int main()
{
    char str[10];

    printf("輸入一字串:");
    scanf("%s",str);
    
    printf("\"%s\"\n",str);
    printf("\\%20s\\\n",str);
    printf("\\%-20s\\\n",str);

    return 0;
}