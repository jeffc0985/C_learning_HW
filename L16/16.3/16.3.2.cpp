#include <iostream>
#include <cstring>
using namespace std;

class Cwin
{
    private :
        char title[50];
        char id;
        int width, height;

    public :
        void set_data(char i, int w, int h)
        {
            id = i;
            width = w;
            height = h;
        }

        void set_title(const char t[])
        {
            strcpy(title,t);
        }

        void show()
        {
            cout << "Window " << id << ", Title :" << title << endl;
            cout << "width = " << width << ", height = " << height;
        }
};

int main()
{
    Cwin win1;
    win1.set_title("Hello C++");
    win1.set_data('A',80,48);
    win1.show();

    return 0;
}