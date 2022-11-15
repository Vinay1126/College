#include <iostream>
using namespace std;

int main()
{
    int a, b;
    try
    {
        cout << "Enter 2 numbers: ";
        cin >> a >> b;
        if (a == 0 || b == 0)
            throw(0);
        else
            cout << "Division of " << a << " and " << b << " is " << a / b;
    }
    catch (...)
    {
        cout << "\nCatch all has caugth an exception.";
    }
}