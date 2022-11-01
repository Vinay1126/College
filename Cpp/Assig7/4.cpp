#include <iostream>
using namespace std;

class Hours
{
    int hr;

public:
    void get()
    {
        cout << "Enter in hours: ";
        cin >> hr;
    }
    void show()
    {
        cout << "Hours: " << hr << endl;
    }
    int geth()
    {
        return hr;
    }
};
class minutes
{
    int min;

public:
    minutes(Hours &hr)
    {
        min = hr.geth() * 60;
    }
    void show()
    {
        cout << "Min: " << min << endl;
    }
};
int main()
{
    Hours ob1;
    ob1.get();
    minutes ob2 = ob1;
    ob2.show();
    return 0;
}