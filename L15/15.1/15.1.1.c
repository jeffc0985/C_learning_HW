#include <stdio.h>

void show_bi(int);
int main()
{
    show_bi(640);
    return 0;
}

void show_bi(int n)
{
    int i, num = n;
    int arr[10] = {0};

    for(i=1 ; i<=10 ; i++)
    {
        arr[10-i] = num % 2;
        num = num/2;
    }

    printf("%d的二進制為:",n);

    for(i=0 ; i<10 ; i++)
        printf("%d",arr[i]);
}