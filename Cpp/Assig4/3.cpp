#include <iostream>
#include <string>
using namespace std;

class conc
{
    string s;
    int l;

public:
    conc(void)
    {
        cout << "\nEnter the string.\n";
        getline(cin, s);
        l = s.length();
    }
    conc(conc &ob1)
    {
        s = ob1.s;
        l = ob1.l;
    }
    conc(string m, int c)
    {
        s = m;
        l = c;
    }
    void disp()
    {
        cout << "\nThe string and its length is:\n";
        cout << s << endl;
        cout << l;
    }
    void concatenate(conc ob2)
    {
        cout << "\nConcatenated string is:  " << s + ob2.s << endl;
    }
};
int main()
{
    conc ob1;
    conc ob2("World", 5);
    conc ob3 = ob1;
    cout << "\nImplicit calling constructor.";
    ob1.disp();
    cout << "\nParametrised constructor.";
    ob2.disp();
    cout << "\nCopy constructor.";
    ob3.disp();
    cout << endl;
    ob1.concatenate(ob2);
    ob2.concatenate(ob3);
    return 0;
}