//找k,使得4k+2最靠近n
#include <stdio.h>

int find_k(int);
int main()
{
    int n;
    printf("請輸入正整數n:");
    scanf("%d",&n);

    printf("k=%d時,使得4k+2最接近%d",find_k(n),n);
    return 0;
}

int find_k(int n)
{
    int k = 0;
    int value, next_value;
    do
    {
        value = 4*k+2-n;
        next_value = 4*(k+1)+2-n;
        while (value<=0 && next_value>0)
        {
            value = -value;
            if (next_value<value)
                return k+1;
            else
                return k;

        }

        k++;
    } while (1);
    


}