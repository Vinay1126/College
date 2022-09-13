#include <bits/stdc++.h>
using namespace std;

class ntime
{
public:
    void disp(char s = '*', int n = 80)
    {
        for (int i = 0; i < n; i++)
            cout << s;
    }
    void dispover(char s, int n)
    {
        for (int i = 0; i < n; i++)
            cout << s;
    }
    void dispover(int n)
    {
        for (int i = 0; i < n; i++)
            cout << "*";
    }
    void dispover(char s)
    {
        for (int i = 0; i < 80; i++)
            cout << s;
    }
    void dispover()
    {
        for (int i = 0; i < 80; i++)
            cout << "*";
    }
};

int main()
{
    ntime ob;
    int n;
    char s;
    cout << "Enter the character:\n";
    s = getchar();
    cout << "\nEnter no. of times you want it to run:\n";
    cin >> n;
    cout << "\nBy default:\n";
    if (s == ' ' && n == 0)
        ob.disp();
    else if (n == 0)
        ob.disp(s);
    else if (s == ' ')
        ob.disp('*', n);
    else
        ob.disp(s, n);
    cout << "\nFor Overloading:\n";
    if (s == ' ' && n == 0)
        ob.dispover();
    else if (n == 0)
        ob.dispover(s);
    else if (s == ' ')
        ob.dispover(n);
    else
        ob.dispover(s, n);
    return 0;
}