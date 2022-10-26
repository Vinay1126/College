#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex() {}
    complex(int i, int j)
    {
        a = i;
        b = j;
    }
    void show()
    {
        cout << "a=" << a << "\n"
             << "b=" << b;
    }
    operator int()
    {
        return a;
    }
};
int main()
{
    complex c(3, 4);
    int x;
    x = c;
    cout << "x=" << x << endl;
    c.show();
}