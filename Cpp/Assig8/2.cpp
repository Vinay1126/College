#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    int id, sal;

public:
    virtual void calsal() = 0;
};
class Regular : public Employee
{
    int da, hra, bs;

public:
    void regsal()
    {
        cout << "\nEnter name of the employee:- ";
        getline(cin, name);
        cout << "\nEnter Id:\n";
        cin >> id;
        cout << "\nEnter DA, HRA and basic salary:\n";
        cin >> da >> hra >> bs;
    }
    void calsal()
    {
        cout << "Details of the regular employee:\n";
        cout << "Salary:- " << (da + hra + bs);
    }
};
class part_time : public Employee
{
    int hr, pay;

public:
    void partsal()
    {
        cout << "\n\nEnter name of the employee:- ";
        getline(cin, name);
        cout << "\nEnter Id:\n";
        cin >> id;
        cout << "\nEnter hours and pay per hour:\n";
        cin >> hr >> pay;
    }
    void calsal()
    {
        cout << "Details of the part-time employee:\n";
        cout << "Salary:- " << (hr * pay);
    }
};
int main()
{
    Employee *t;
    Regular ob1;
    part_time ob2;
    t = &ob1;
    ob1.regsal();
    t->calsal();
    t = &ob2;
    ob2.partsal();
    t->calsal();
    return 0;
}