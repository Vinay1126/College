#include <iostream>
using namespace std;

class B
{
    int m, n;

public:
    B() {}
    B(int e, int g)
    {
        m = e;
        n = g;
    }
    int getm()
    {
        return m;
    }
    int getn()
    {
        return n;
    }
};

class A
{
    int a, b;

public:
    A() {}
    A(B c)
    {
        a = c.getm();
        b = c.getn();
    }
    void show()
    {
        cout << "a = " << a << "\nb = " << b;
    }
};

int main()
{
    A t;
    B k(4, 5);
    t = k;
    t.show();
}