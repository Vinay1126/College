#include <iostream>
using namespace std;

class Distance
{
    int dist;

public:
    void input()
    {
        cout << "Enter distance: ";
        cin >> dist;
    }

    void display()
    {
        cout << "Distance: " << dist;
    }

    Distance operator<(Distance dis)
    {
        Distance temp;
        if (dist > dis.dist)
            temp.dist = dist;
        else if (dist < dis.dist)
            temp.dist = dis.dist;
        return temp;
    }

    void operator==(Distance dis)
    {
        if (dist == dis.dist)
            printf("SAME DISTANCE\n");
        else
            printf("NOT SAME\n");
    }
};

int main()
{
    Distance dist1, dist2;
    dist1.input();
    dist2.input();
    dist1 == dist2;
    Distance dist3 = dist1 < dist2;
    dist3.display();
    cout << endl;
    return 0;
}