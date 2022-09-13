#include <iostream>
using namespace std;

class incret
{
public:
    void inc(int a)
    {
        a++;
        cout << endl
             << "The incremented argument is " << a;
    }
};
int main()
{
    incret ob;
    int a;
    cout << "Enter the argument:\n";
    cin >> a;
    ob.inc(a);
    return 0;
}