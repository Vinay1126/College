#include<iostream>

using namespace std;

class comp
{
    private:
        int real,img;
    public:
        void getdata();
        void putdata();
};
void comp::getdata()
{
    cout<<"\nEnter the real number: ";
    cin>>real;
    cout<<"\nEnter the imaginary number: ";
    cin>>img;
}
void comp::putdata()
{
    cout<<"\n"<<real<<" + "<<"i"<<img;
}
int main()
{
    comp ob1[10];
    cout<<"\nEnter 10 complex numbers:\n";
    for(int i=0;i<10;i++)
        ob1[i].getdata();
    cout<<"\n\nYour 10 complex numbers are:\n";
    for(int i=0;i<10;i++)
        ob1[i].putdata();
    return 0;
}
