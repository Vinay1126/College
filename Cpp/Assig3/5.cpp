#include <iostream>
using namespace std;

class swref
{
    int n;

public:
    void getdata()
    {
        cout << "Enter no.\n";
        cin >> n;
    }
    void swap(swref *ob2)
    {
        int t;
        t = n;
        n = ob2->n;
        ob2->n = t;
    }
    void putdata()
    {
        cout << endl
             << n;
    }
};
int main()
{
    swref ob1, ob2;
    ob1.getdata();
    ob2.getdata();
    ob1.swap(&ob2);
    ob1.putdata();
    ob2.putdata();
    return 0;
}