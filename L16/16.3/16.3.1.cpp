#include <iostream>
using namespace std;

class Cnum
{
    public :
        int a, b, c;
};

int main()
{
    Cnum obj;

    obj.a = 1;
    obj.b = 3;
    obj.c = obj.a + obj.b;

    cout << "(a,b,c) = " << obj.a << "," << obj.b << "," << obj.c;

    return 0;
}