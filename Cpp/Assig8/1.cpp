#include <iostream>
using namespace std;

class shape
{
protected:
    int rad, side, tri1, tri2, tri3;

public:
    virtual void display() = 0;
};
class square : public shape
{
    float ar;

public:
    void getdata()
    {
        cout << "\nEnter side of sqaure: ";
        cin >> side;
    }
    void area()
    {
        ar = side * side;
    }
    void display()
    {
        area();
        cout << "Area of square is: " << ar << endl;
    }
};
class circle : public shape
{
    float ar;

public:
    void getdata()
    {
        cout << "\nEnter radius of circle: ";
        cin >> rad;
    }
    void area()
    {
        ar = 3.14 * rad * rad;
    }
    void display()
    {
        area();
        cout << "Area of circle is: " << ar << endl;
    }
};
class triangle : public shape
{
    float ar;

public:
    void getdata()
    {
        cout << "\nEnter 3 sides of triangle: ";
        cin >> tri1 >> tri2 >> tri3;
    }
    void area()
    {
        ar = tri1 * tri2 * tri3;
    }
    void display()
    {
        area();
        cout << "Area of triangle is: " << ar << endl;
    }
};

int main()
{
    shape *p;
    circle cir;
    p = &cir;
    cir.getdata();
    p->display();
    square sqr;
    p = &sqr;
    sqr.getdata();
    p->display();
    triangle tri;
    p = &tri;
    tri.getdata();
    p->display();
    return 0;
}