#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex() {}
    complex(int i)
    {
        a = i;
        b = 0;
    }
    void show()
    {
        cout << "a=" << a << "\n"
             << "b=" << b;
    }
};
int main()
{
    complex c;
    int x = 5;
    c = x;
    cout << "x=" << x << endl;
    c.show();
}