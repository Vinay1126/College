#include <iostream>
using namespace std;

class student
{
    char *name;
    int age, roll, avg;

public:
    student(student &ob1)
    {
        name = ob1.name;
        roll = ob1.roll;
        avg = ob1.avg;
        cout << "\nThe copied object is:\n";
        cout << name << endl
             << roll << endl
             << avg;
    }
    student(void)
    {
        name = new char;
        cout << "\nEnter name: ";
        cin >> name;
        cout << "\nEnter age,roll no. and average marks of the student:\n";
        cin >> age >> roll >> avg;
    }
    friend void comp(student &, student &);
};
void comp(student &ob1, student &ob2)
{
    if (ob1.avg > ob2.avg)
        cout << "\nHighest average score is " << ob1.avg;
    if (ob1.avg < ob2.avg)
        cout << "\nHighest average score is " << ob2.avg;
    if (ob1.avg == ob2.avg)
        cout << "\nEqual";
}
int main()
{
    student ob1, ob2;
    student ob3(ob1);
    comp(ob2, ob3);
    return 0;
}