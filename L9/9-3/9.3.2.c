#include <stdio.h>

void square(int arr[ ]);
int main()
{
    int i;
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("呼叫square()前,陣列A=");
    for(i=0;i<10;i++)
    printf("%d ",A[i]);
    printf("\n");
    
    square(A);
    
    printf("呼叫square()後,陣列A=");
    for(i=0;i<10;i++)
    printf("%d ",A[i]);

    
    return 0;
}

void square(int arr[])
{
    int i;
    for(i=0;i<10;i++)
        arr[i] *= i+1;

}