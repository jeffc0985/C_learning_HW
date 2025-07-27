#include <stdio.h>

int min(int arr[]);
int min_i = 0;

int main()
{
    
    int A[8] = {5,6,14,9,23,0,12,8};
    printf("陣列A的最小值為:A[%d]=%d",min_i,min(A));
    return 0;
}

int min(int arr[])
{
    int i;
    int min = arr[0];
    for(i=0;i<8;i++)
        if(arr[i]<min)
            {
                min_i = i;
                min = arr[i];
            }
    return min;

}