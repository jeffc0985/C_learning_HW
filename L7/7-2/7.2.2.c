//3000m繩每日減半,n天後,繩長小於5m
#include <stdio.h>

int main()
{
    int d = 0;
    float length = 3000;

    while (length>=5)
    {
        length /= 2;
        d += 1;
    }
    
    printf("%d天後,繩長小於5m",d);

    return 0;
}