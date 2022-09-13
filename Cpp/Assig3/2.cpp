#include <bits/stdc++.h>
using namespace std;

class cylinder
{
    int r, h;

public:
    void getdata()
    {
        cout << "Enter sides of cylinder: ";
        cin >> r, h;
    }
    friend void volume(cylinder);
};
class sphere
{
    int r;

public:
    void getdata()
    {
        cout << "Enter radius of sphere: ";
        cin >> r;
    }
    friend void volume(sphere);
};
class cuboid
{
    int l, b, h;

public:
    void getdata()
    {
        cout << "Enter sides of cuboid: ";
        cin >> l, b, h;
    }
    friend void volume(cuboid);
};
void volume(cuboid ob1)
{
    cout << "Volume of cuboid is  " << ob1.l * ob1.b * ob1.h << endl;
}
void volume(cylinder ob2)
{
    cout << "Volume of cylinder is  " << ob2.r * ob2.h << endl;
}
void volume(sphere ob3)
{
    cout << "Volume of sphere is  " << (4 / 3) * 3.14 * ob3.r * ob3.r * ob3.r << endl;
}
int main()
{
    cuboid ob1;
    cylinder ob2;
    sphere ob3;
    ob1.getdata();
    ob2.getdata();
    ob3.getdata();

    volume(ob1);
    volume(ob2);
    volume(ob3);
    return 0;
}