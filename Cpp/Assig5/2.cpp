#include <iostream>
using namespace std;
class student
{
    int age, roll;
    string name;

public:
    void getdata()
    {
        cout << "Enter the name of the student:- ";
        getline(cin, name);
        cout << "\nEnter roll no and age of the student:-\n";
        cin >> roll >> age;
    }
    void putdata()
    {
        cout << "\n\nDetails are:\n"
             << "Name:- " << name << "\nRoll No.:- " << roll << "\nAge:- " << age;
    }
};
class test : public student
{
    int marks[5];

public:
    void getmarks()
    {
        getdata();
        cout << "\nEnter marks of 5 subjects:-\n";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }
    void putmarks()
    {
        putdata();
        cout << "\nMarks of 5 subjects are:-\n";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << endl;
    }
};
int main()
{
    test ob1;
    ob1.getmarks();
    ob1.putmarks();
    return 0;
}