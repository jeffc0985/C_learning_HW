#include <iostream>
using namespace std;

int my_abs(int);
float my_abs(float);

int main()
{
    int a;
    float b;

    cout << "請輸入整數a:";
    cin >> a;
    cout << "絕對值為:" << my_abs(a) << endl;

    cout << "請輸入小數b:";
    cin >> b;
    cout << "絕對值為:" << my_abs(b) << endl;

    return 0;
}

int my_abs(int n)
{
    if(n >= 0)
        return n;
    return -n;
}

float my_abs(float n)
{
    if(n >= 0)
        return n;
    return -n;
}