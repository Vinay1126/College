#include <iostream>
using namespace std;

class Ab
{
protected:
    int num;

public:
    virtual void print() = 0;
};

class Number : public Ab
{
public:
    Number()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void print()
    {
        cout << "The number is: " << num << endl;
    }
};

int main()
{
    Ab *ob;
    Number num;

    ob = &num;
    ob->print();
    return 0;
}