#include <iostream>
using namespace std;

class order
{
    int a;
    static int count;

public:
    order(void)
    {
        cout << "\nEnter the no.:  ";
        cin >> a;
        count++;
        cout << "\nThe value is " << a << " and the order is " << count;
    }
    order(int l)
    {
        a = l;
        count++;
        cout << "\nThe value is " << a << " and the order is " << count;
    }
    order(order &ob1)
    {
        a = ob1.a;
        count++;
        cout << "\nThe value is " << a << " and the order is " << count;
    }
    ~order()
    {
        count++;
        cout << "\nDestructor is called  and its order is " << count;
    }
};
int order::count;
int main()
{
    order ob1;
    order ob2(5);
    order ob3 = ob2;
    return 0;
}
