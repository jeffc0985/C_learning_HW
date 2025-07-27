#include <stdio.h>

int main()
{
    int i, count = 0;
    int arr[] = {3,5,0,3,2,4,1,6,8,5,4,3,2};
    printf("陣列arr的元素個數有%d個\n",sizeof(arr)/sizeof(int));

    int size = sizeof(arr)/sizeof(int);

    for(i=0;i<size;i++)
        if(arr[i]>=3 && arr[i]<=6)
            count += 1;

    printf("陣列arr中,介於3~6之間(含)的元素有%d個\n",count);

    return 0;
}