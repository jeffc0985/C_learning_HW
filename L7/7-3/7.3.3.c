//輸入3次 print*號
#include <stdio.h>

int main()
{
    int n, i = 0;
    do
    {   
        int j = 0;

        do
        {
            printf("請輸入一個整數(1~50):");
            scanf("%d",&n);
    
        } while (n<1 || n>50);

        while (j<n)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
         
    } while (i<3);
    
    return 0;
}