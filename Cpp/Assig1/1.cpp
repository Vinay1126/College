#include<iostream>
using namespace std;

struct stud
{
    char name[20];
    int roll,m[5];
};
typedef struct stud node;
int main()
{
    node s;
    cout<<"\nEnter name of the student:\n";
    cin.getline(s.name,20);
    cout<<"\nEnter roll number of the student:\n";
    cin>>s.roll;
    cout<<"\nEnter marks of 5 subjects\n";
    for(int i=0;i<5;i++)
        cin>>s.m[i];
    cout<<"\n\nName ="<<s.name
        <<"\nRoll Number = "<<s.roll
        <<"\nMarks:\n";
    for(int i=0;i<5;i++)
    {
        cout<<s.m[i];
        cout<<"\n";
    }

    return 0;
}
