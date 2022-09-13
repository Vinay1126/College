#include<iostream>

using namespace std;

class nme
{
    private:
        string name;
    public:
        void getnm()
        {
            cout<<"\nEnter your name:\n";
            getline(cin,name);
        }
        void putnm()
        {
            cout<<"\nHello "<<name;
        }
};
int main()
{
    nme ob1;
    ob1.getnm();
    ob1.putnm();
    return 0;
}
