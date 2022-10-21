#include <iostream>
using namespace std;

class student
{

    string name;
    int roll;

public:
    student(int num)
    {
        name = "Vinay";
        roll = 21051806;
    }
    void *operator new(size_t size)
    {
        void *obj = malloc(size);
        return obj;
    }
    void operator delete(void *ptr)
    {
        free(ptr);
        cout << "\nObject is deleted";
    }
    void disp()
    {
        cout << "\nName: " << name << "\nRoll No.: " << roll;
    }
};
int main()
{
    student *ob = new student(20);
    ob->disp();
    delete (ob);
    return 0;
}