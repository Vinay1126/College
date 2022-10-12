#include <iostream>
using namespace std;

class A
{
protected:
    int a;
};

class B
{
protected:
    int b;
};

// Single Inheritance
class C : public A
{
protected:
    int c;

public:
    void input()
    {
        cout << "Single Inheritance (Enter 2 integers): ";
        cin >> a >> c;
    }
    void display() { cout << a << " " << c << '\n'; }
};

// Multi-Level Inheritance
class D : public C
{
protected:
    int d;

public:
    void input()
    {
        cout << "\nMulti-Level Inheritance (Enter 3 integers): ";
        cin >> a >> c >> d;
    }
    void display() { cout << a << " " << c << " " << d << '\n'; }
};

// Multiple Inheritance
class E : public A, B
{
protected:
    int e;

public:
    void input()
    {
        cout << "\nMultiple Inheritance (Enter 3 integers): ";
        cin >> a >> b >> e;
    }
    void display() { cout << a << " " << b << " " << e << '\n'; }
};

// Hybrid Inheritance
class F : public B, C
{
protected:
    int f;

public:
    void input()
    {
        cout << "\nHybrid Inheritance (Enter 4 integers): ";
        cin >> a >> b >> c >> f;
    }
    void display() { cout << a << " " << b << " " << c << " " << f << '\n'; }
};

// Heirarchial Inheritance
class G : public A
{
protected:
    int g;

public:
    void input()
    {
        cout << "\nHeirarchial Inheritance part 1 (Enter 2 integers): ";
        cin >> a >> g;
    }
    void sum() { cout << a + g << '\n'; }
};

class H : public A
{
protected:
    int h;

public:
    void input()
    {
        cout << "\nHeirarchial Inheritance part 2 (Enter 2 integers): ";
        cin >> a >> h;
    }
    void diff() { cout << a - h << '\n'; }
};

int main()
{
    C c;
    D d;
    E e;
    F f;
    G g;
    H h;
    c.input();
    c.display();
    d.input();
    d.display();
    e.input();
    e.display();
    f.input();
    f.display();
    g.input();
    g.sum();
    h.input();
    h.diff();
    return 0;
}