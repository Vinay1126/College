#include <iostream>
using namespace std;

class Time
{
    int hr, min;

public:
    Time(void)
    {
        cout << "\nEnter hour and minutes:\n";
        cin >> hr >> min;
    }
    Time(Time &ob1)
    {
        hr = ob1.hr;
        min = ob1.min;
    }
    Time(int a, int b)
    {
        hr = a;
        min = b;
    }
    Time(int a)
    {
        hr = a;
        min = 00;
    }
    void disp()
    {
        cout << "\nTime is:";
        cout << endl
             << hr << ":" << min << endl;
    }
};
int main()
{
    Time ob1;
    Time ob2(3, 52);
    Time ob3 = ob1;
    Time ob4(7);
    cout << "\nImplicit calling constructor.";
    ob1.disp();
    cout << "\nParametrised constructor.";
    ob2.disp();
    cout << "\nCopy constructor.";
    ob3.disp();
    cout << "\nParametrised constructor.";
    ob4.disp();
    return 0;
}