#include <iostream>
using namespace std;

template <class T>

class temp
{
    T a, b;

public:
    temp()
    {
        cout << "Enter 2 no.s: ";
        cin >> a >> b;
    }
    T add()
    {
        return a + b;
    }
};

int main()
{
    cout << "\nInteger No.:\n";
    temp<int> ob1;
    cout << "\nFloat No.:\n";
    temp<float> ob2;
    cout << "\nSum of integer numbers is " << ob1.add();
    cout << "\nSum of float numbers is " << ob2.add();
    return 0;
}