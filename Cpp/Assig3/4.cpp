#include <iostream>

using namespace std;

class calval
{
    int n;

public:
    void getdata()
    {
        cout << "Enter number: ";
        cin >> n;
    }
    void sq(calval);
    void cube(calval);
};
inline void calval::sq(calval ob)
{
    cout << "Square of the number is " << ob.n * ob.n << endl;
}
inline void calval::cube(calval ob)
{
    cout << "Cube of the number is " << ob.n * ob.n * ob.n;
}
int main()
{
    calval ob;
    ob.getdata();
    ob.sq(ob);
    ob.cube(ob);
    return 0;
}