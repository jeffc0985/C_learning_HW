#include <iostream>
using namespace std;

int add(int, int);
float add(float, float);
int main()
{
    int a, b;
    float c, d;
    
    cout << "請輸入整數a:";
    cin >> a;
    cout << "請輸入整數b:";
    cin >> b;

    cout << a << "+" << b << "=" << add(a,b) << endl;

    cout << "請輸入小數c:";
    cin >> c;
    cout << "請輸入小數d:";
    cin >> d;

    cout << c << "+" << d << "=" << add(c,d) << endl;
    
    return 0;
}

int add(int a, int b)
{
    return a+b;
}

float add(float a, float b)
{
    return a+b;
}