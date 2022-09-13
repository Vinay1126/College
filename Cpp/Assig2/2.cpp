#include<iostream>

using namespace std;

class student
{
    private:
        string name;
        int roll,tot;
    public:
        void getdata();
        void putdata();
};
void student::getdata()
{
    cin.ignore();
    cout<<"\nEnter name of the student:\n";
    getline(cin,name);
    cout<<"\nEnter roll number:\n";
    cin>>roll;
    cout<<"\nEnter total marks:\n";
    cin>>tot;
}
void student::putdata()
{
    cin.ignore();
    cout<<"\nName = "<<name
        <<"\nRoll number = "<<roll
        <<"\nTotal marks = "<<tot;
}
int main()
{
    int i,n;
    cout<<"\nHow many records you want?\n";
    cin>>n;
    student ob1[n];
    for(i=0;i<n;i++)
        ob1[i].getdata();
    for(i=0;i<n;i++)
        ob1[i].putdata();
    return 0;
}
