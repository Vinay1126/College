#include <iostream>
using namespace std;

class Complex
{
    int img, real;

public:
    void input()
    {
        cout << "Enter real and imaginary part of complex number separated by space: ";
        cin >> img >> real;
    }

    void display()
    {
        cout << real;
        if (img >= 0)
            cout << " + i" << img;
        else
            cout << " - i" << img;
        cout << '\n';
    }

    friend void operator++(Complex &num);
};

void operator++(Complex &num)
{
    num.img++;
    num.real++;
}

int main()
{
    Complex num;
    num.input();
    num.display();
    operator++(num);
    num.display();
    return 0;
}