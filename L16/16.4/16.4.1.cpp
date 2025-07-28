#include <iostream>
using namespace std;
#define PI 3.14

class CSphere
{
    private :
        int x, y, z;
        double radius;
        
        double power(double x, double n)
        {
            double val = 1;
            for(int i=1 ; i<=n ; i++)
                val *= x;
            return val;
        }

        double volume(double r)
        {
            return (4/3.0) * PI * power(r,3);
        }

    public :
        void set_location(int a, int b, int c)
        {
            x = a;
            y = b;
            z = c;
        }

        void set_r(double r)
        {
            radius = r;
        }

        void show_data()
        {
            cout << "球心座標:" << x << "," << y << "," << z << endl;
            cout << "volume = " << volume(radius) << endl;
        }
};

int main()
{
    CSphere sphere1;

    sphere1.set_location(7,4,6);
    sphere1.set_r(2.5);
    sphere1.show_data();
    
    return 0;
}