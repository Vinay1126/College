#include <iostream>
#include <cmath>
using namespace std;

class shape
{
protected:
    float r, s1, s2, s3;
    int l, b;
};
class circle : public shape
{
public:
    void input()
    {
        cout << "Enter radius of circle:- ";
        cin >> r;
    }

    void area()
    {
        cout << "\nArea of circle:- " << M_PI * r * r << endl;
    }
};

class triangle : public shape
{
public:
    void input()
    {
        cout << "\nEnter 3 sides of triangle:\n";
        cin >> s1 >> s2 >> s3;
    }

    void area()
    {
        float s = (s1 + s2 + s3) / 2;
        cout << "\nArea of triangle:- " << sqrt(s * (s - s1) * (s - s2) * (s - s3)) << endl;
    }
};

class rectangle : public shape
{
public:
    void input()
    {
        cout << "\nEnter length and breadth of rectangle:\n";
        cin >> l >> b;
    }

    void area()
    {
        cout << "\nArea of rectangle:- " << l * b << endl;
    }
};

int main()
{
    circle c;
    triangle t;
    rectangle r;
    c.input();
    t.input();
    r.input();
    c.area();
    t.area();
    r.area();
    return 0;
}