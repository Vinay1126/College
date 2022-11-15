#include <iostream>
using namespace std;

int main()
{
    int a, b, t;
    cout << "Enter the 2 numbers: ";
    cin >> a >> b;
    try
    {
        if (b != 0)
        {
            t = a / b;
            cout << "\nDivision of " << a << " and " << b << " is " << t;
        }
        else
            throw(0);
    }
    catch (int l)
    {
        cout << "\nElement b is 0 so division not possible.";
    }
    return 0;
}