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
    void swap()
    {
        T temp = a;
        a = b;
        b = temp;
    }
    void display()
    {
        cout << a << " " << b;
    }
};

int main()
{
    cout << "\nInteger No.:\n";
    temp<int> ob1;
    ob1.display();
    ob1.swap();
    ob1.display();
    return 0;
}