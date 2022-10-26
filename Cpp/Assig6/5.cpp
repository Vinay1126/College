#include <iostream>
using namespace std;

class Time
{
    string time;

public:
    void input()
    {
        cout << "Enter time in HH:MM format: ";
        cin >> time;
    }

    void display()
    {
        cout << "Time: " << time;
    }

    void operator==(Time tm)
    {
        if (time == tm.time)
            cout << "BOTH SAME\n";
        else
            cout << "NOT SAME\n";
    }
};

int main()
{
    Time t1, t2;
    t1.input();
    t2.input();
    t1 == t2;
    return 0;
}