#include <iostream>
using namespace std;

class CRec
{
    private :
        int width, height;
    public :
        CRec(int w, int h)
        {
            width = w;
            height = h;
        }

        CRec()
        {
            width = 10;
            height = 8;
        }

        void show()
        {
            cout << "width = " << width;
            cout << ", height = " << height << endl;
        }
};

int main()
{
    CRec rec1(80,48), rec2;

    cout << "rec1:";
    rec1.show();
    
    cout << "rec2:";
    rec2.show();

    return 0;
}