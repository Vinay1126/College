#include<iostream>
#include<iomanip>

using namespace std;

class emp
{
    private:
        int id,age;
        string name;
        float bs,gs;
    public:
        void getdata();
        void putdata();
};
void emp::getdata()
{
    cout<<"\nEnter employee ID:\n";
    cin>>id;
    cin.ignore();
    cout<<"\nEnter employee Name:\n";
    getline(cin,name);
    cout<<"\nEnter employee Age:\n";
    cin>>age;
    cout<<"\nEnter employee Basic Salary:\n";
    cin>>bs;
    gs = bs + (0.8 * bs) + (0.1 * bs);
}
void emp::putdata()
{
    cout<<endl;
    cout<<left<<setw(5)<<id<<left<<setw(15)<<name<<left<<setw(5)<<age<<left
        <<setw(15)<<bs<<left<<setw(5)<<gs;
}
int main()
{
    int i,n;
    cout<<"\nHow many records you want?\n";
    cin>>n;
    emp ob1[n];
    for(i=0;i<n;i++)
        ob1[i].getdata();
    cout<<"\n\n";
    cout<<left<<setw(5)<<"Id"<<left<<setw(15)<<"Name"<<left<<setw(5)
        <<"Age"<<left<<setw(15)<<"Basic Salary"<<left<<setw(5)<<"Gross Salary";
    for(i=0;i<n;i++)
        ob1[i].putdata();
    return 0;
}
