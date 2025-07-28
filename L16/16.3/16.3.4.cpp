#include <iostream>
using namespace std;

class Cbox
{
    private :
        int length, width, height;
        double weight;
    public :
        void set(int l, int w, int h, double wg)
        {
            length = l;
            width = w;
            height = h;
            weight = wg;
        }

        void set(int l, int w, int h)
        {
            length = l;
            width = w;
            height = h;
        }

        void set(double wg)
        {
            weight = wg;
        }

        void show()
        {
            cout << "length = " << length;
            cout << ", width = " << width;
            cout << ", height = " << height;  
            cout << ", weight = " << weight << endl;  
        } 
};

int main()
{
    Cbox box1, box2;

    box1.set(30,20,10,500.0);
    box2.set(40,10,10);
    box2.set(1000.0);

    cout << "box1:";
    box1.show();

    cout << "box2:";
    box2.show();

    return 0;
}