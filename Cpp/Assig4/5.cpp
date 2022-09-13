#include <iostream>
using namespace std;

class check
{
    static int count;

public:
    check(void)
    {
        count++;
    }
    static void disp()
    {
        cout << "\nNo. of objects present are " << count;
    }
};
int check::count;
int main()
{
    check ob1, ob2, ob3, ob4, ob5;
    check::disp();
    return 0;
}