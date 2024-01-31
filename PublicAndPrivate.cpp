
#include <iostream>
#include <cstdlib>

using namespace std;

class CWin
{
    private:
        char id;
        int width;
        int height;

        int area(void)
        {
            return width * height;
        }
    public:


        void show_area(void)
        {
            cout << "Window" << id;
            cout << ", area= " << area() << endl;
        }


        // setting data
        void set_data(char i, int w, int h)
        {
            id = i;
            if(w>0 && h>0)
            {
                width = w;
                height = h;
            }
            else
            {
                cout << "Input error!!" << endl;
            }
        }


};

int main(void)
{
    CWin win1;
    win1.set_data('A', 20, 30);
    cout << "'s area: " << win1.area() << endl;

    win1.show_area();

    system("pause");
    return 0;
}
