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
        Cbox(int l, int w, int h)
        {
            len = l;
            wid = w;
            hei = h;
        }

        Cbox()
        {
            len = wid = hei = 1;
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
    Cbox box1(20,15,10), box2;

    box1.show();
    box2.show();

    return 0;
}