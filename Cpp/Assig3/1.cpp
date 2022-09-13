#include <bits/stdc++.h>
using namespace std;

class rectangle
{
    int l, b;

public:
    void getdata()
    {
        cout << "Enter sides of rect: ";
        cin >> l, b;
    }
    friend void area(rectangle);
};
class circle
{
    int r;

public:
    void getdata()
    {
        cout << "Enter radius of circle: ";
        cin >> r;
    }
    friend void area(circle);
};
class triangle
{
    int l, b, h;

public:
    void getdata()
    {
        cout << "Enter sides of triag: ";
        cin >> l, b, h;
    }
    friend void area(triangle);
};
void area(triangle ob1)
{
    cout << "Area of triangle is  " << ob1.l * ob1.b * ob1.h << endl;
}
void area(rectangle ob2)
{
    cout << "Area of rectangle is  " << ob2.l * ob2.b << endl;
}
void area(circle ob3)
{
    cout << "Area of circle is  " << 3.14 * ob3.r * ob3.r << endl;
}
int main()
{
    triangle ob1;
    rectangle ob2;
    circle ob3;
    ob1.getdata();
    ob2.getdata();
    ob3.getdata();

    area(ob1);
    area(ob2);
    area(ob3);
    return 0;
}