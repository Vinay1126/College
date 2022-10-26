#include <iostream>
using namespace std;

class Distance
{
    int feet, inches;

public:
    void input()
    {
        cout << "Enter a distance in feet and inches separated by space: ";
        cin >> feet >> inches;
    }

    Distance operator+(Distance dist)
    {
        Distance temp;
        temp.feet = feet + dist.feet;
        temp.inches = inches + dist.inches;
        if (temp.inches >= 12)
        {
            temp.feet++;
            temp.inches -= 12;
        }
        return temp;
    }

    Distance operator+(int inch)
    {
        Distance temp;
        temp.feet = feet;
        temp.inches = inch + inches;
        if (temp.inches >= 12)
        {
            temp.feet++;
            temp.inches -= 12;
        }
        return temp;
    }

    void show()
    {
        cout << feet << " feet and " << inches << " inches\n";
    }
};

int main()
{
    Distance dist1, dist2;
    dist1.input();
    printf("Distance 1: ");
    dist1.show();

    dist2.input();
    printf("Distance 2: ");
    dist2.show();

    printf("\nSum of distance: ");
    Distance dist3 = dist1 + dist2;
    dist3.show();

    printf("\nEnter distance in inches to be added to Distance 1: ");
    int inches;
    scanf("%d", &inches);
    Distance dist4 = dist1 + inches;
    dist4.show();

    return 0;
}