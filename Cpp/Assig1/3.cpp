#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Employee{
    int id;
    string name;
    int age;
    float basicSalary;
    float grossSalary;
}emp[100000];

int main(){
    int i, n;
    //Employee emp[100000];
    void input(int, Employee*);
    void output(int, Employee*);

    cout<<"Enter the number of employees: ";
    cin>>n;

    input(n, emp);
    output(n, emp);
    return 0;
}

void input(int n, Employee *emp){
    int i;
    cout<<"Enter employee details:\n";
    for (i=0; i<n; i++){
        cout<<"For employee "<<i+1<<":\n";
        cout<<"Enter employee id: ";
        cin>>emp->id;
        cout<<"Enter employee name: ";
        cin.ignore();
        getline(cin, emp->name);
        cout<<"Enter employee age: ";
        cin>>emp->age;
        cout<<"Enter basic salary of employee: ";
        cin>>emp->basicSalary;
        emp->grossSalary = emp->basicSalary + 0.8*emp->basicSalary + 0.1*emp->basicSalary;
        cout<<endl;
        emp++;
    }
}

void output(int n, Employee *emp){
    int i;
    cout<<left<<setw(5)<<"Id"<<left<<setw(15)<<"Name"<<left<<setw(5)
        <<"Age"<<left<<setw(15)<<"Basic Salary"<<left<<setw(5)<<"Gross Salary";
    for (i=0; i<n; i++){
        cout<<endl;
        cout<<left<<setw(5)<<emp->id<<left<<setw(15)<<emp->name<<left<<setw(5)<<emp->age<<left
        <<setw(15)<<emp->basicSalary<<left<<setw(5)<<emp->grossSalary;

        emp++;
    }
}
