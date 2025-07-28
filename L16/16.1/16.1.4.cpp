#include <iostream>
using namespace std;

int add(int, int);
int main()
{
    int a, b;
    
    cout << "請輸入a:";
    cin >> a;
    cout << "請輸入b:";
    cin >> b;

    cout << a << "+" << b << "=" << add(a,b) << endl;
    return 0;
}

int add(int a, int b)
{
    return a+b;
}