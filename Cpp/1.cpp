#include <iostream>
using namespace std;

class Time
{
    int Hours, Minute, Second;

public:
    Time()
    {
        Hours = Minute = Second = 0;
    }

    Time(int h, int m, int s)
    {
        Hours = h;
        Minute = m;
        Second = s;
    }

    void display()
    {
        cout << Hours << " : " << Minute << " : " << Second << endl;
    }

    Time add(Time &obj)
    {
        Time temp;
        temp.Hours = Hours + obj.Hours;
        temp.Minute = Minute + obj.Minute;
        temp.Second = Second + obj.Second;
        return temp;
    }
};

int main()
{
    Time t1(12, 10, 5);
    Time t2(5, 3, 2);
    Time t3 = t1.add(t2);
    t3.display();
    return 0;
}