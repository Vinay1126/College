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
protected:
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
class result : protected test
{
    int tot;
    float per;

public:
    void caltot()
    {
        tot = 0;
        per = 0.0;
        getmarks();
        for (int i = 0; i < 5; i++)
            tot += marks[i];
        per = tot / 5;
        putmarks();
        cout << "\nTotal marks:- " << tot << "\nPercentage:- " << per;
    }
};
int main()
{
    result ob1;
    ob1.caltot();
    return 0;
}