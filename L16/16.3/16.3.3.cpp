#include <iostream>
using namespace std;

class Cbox
{
    private :
        int len, wid, hei;

        int vol(int l, int w, int h)
        {
            return l * w * h;
        }
    
        int surface(int l, int w, int h)
        {
            return 2*((l*w) + (l*h) + (w*h));
        }

    public :
        void set_data(int l, int w, int h)
        {
            len = l;
            wid = w;
            hei = h;
        }

        void show()
        {
            cout << "Box(x,y,z) = " << len << "," << wid << "," << hei << endl;
            cout << "volume = " << vol(len,wid,hei) << endl;
            cout << "surface_area = " << surface(len,wid,hei) << endl;
        }
};

int main()
{
    Cbox box1;

    box1.set_data(20,15,10);
    box1.show();

    return 0;
}