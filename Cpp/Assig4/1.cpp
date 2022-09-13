#include <iostream>
using namespace std;

class complex
{
    int img, real;

public:
    complex(int a, int b)
    {
        img = a;
        real = b;
    }
    complex(complex &ob1)
    {
        img = ob1.img;
        real = ob1.real;
    }
    complex(void)
    {
        cout << "\nEnter the real and imaginary part.\n";
        cin >> real >> img;
    }
    void disp()
    {
        cout << "\nThe no. is:";
        cout << endl
             << real << " + i" << img << endl;
    }
    ~complex()
    {
        cout << "\nDestructor has been called.\n";
    }
};
int main()
{
    complex ob1;
    complex ob2(3, 4);
    complex ob3 = ob1;
    cout << "\nImplicit calling constructor.";
    ob1.disp();
    cout << "\nParametrised constructor.";
    ob2.disp();
    cout << "\nCopy constructor.";
    ob3.disp();
    return 0;
}