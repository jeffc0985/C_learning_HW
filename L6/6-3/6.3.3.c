#include <stdio.h>

int main()
{
    int a = 4,b = 6,larger;

    a>b ? (larger=a) : (larger=b);
    printf("%d比較大",larger);

    return 0;
}