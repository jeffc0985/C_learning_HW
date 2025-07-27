#include <stdio.h>
void address(float*);
int main()
{
    float pi = 3.14f;
    float* p = &pi;

    address(p);
    address(&pi);

    return 0;
}

void address(float* p)
{
    printf("在位址%p內儲存的變數內容為%.2f\n",p,*p);

}