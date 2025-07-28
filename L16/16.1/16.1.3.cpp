#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n;
    do
    {
        cout << "請輸入正整數:";
        cin >> n;
    } while (n < 1);
    
    int i = 1;
    do
    {
        sum += i;
        i++;
    } while (i<=n);
    
    cout << "1~" << n << "的和為:" << sum << endl;

    return 0;
}