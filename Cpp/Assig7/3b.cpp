#include <iostream>
using namespace std;
class A;
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

    void settera(int k)
    {
        m = k;
    }
    void setterb(int z)
    {
        n = z;
    }

    void show()
    {
        cout << "m = " << m << "\nn = " << n;
    }
};
class A
{
    int a, b;

public:
    A() {}
    A(int e, int g)
    {
        a = e;
        b = g;
    }
    void show()
    {
        cout << "a = " << a << "\nb = " << b;
    }
    operator B()
    {
        B r;
        r.settera(a);
        r.setterb(b);
        return r;
    }
};

int main()
{
    A t(4, 5);
    B k;
    k = t;
    k.show();
}