#include <iostream>
using namespace std;

int max(int,int,int);
int max(int,int);

int main()
{
    cout << "max(45,8 6,78) = " << max(45,86,78) << endl;
    cout << "max(10,20) = " << max(10,20) << endl;

    return 0;
}

int max(int a, int b, int c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;    
}

int max(int a,int b)
{
    return (a > b ? a : b);
}