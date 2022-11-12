#include <iostream>
using namespace std;

template <class T>

T add(T a, T b)
{
    return a + b;
}
int main()
{
    int a, b;
    float c, d;
    cout << "Enter 2 integer numbers: ";
    cin >> a >> b;
    cout << "Enter 2 float numbers: ";
    cin >> c >> d;
    cout << "\nSum of integer numbers is ";
    cout << add<int>(a, b) << endl;
    cout << "Sum of float numbers is ";
    cout << add<float>(c, d);
    return 0;
}