#include <iostream>
using namespace std;

template <class T>

class arrsort
{
    T arr[100];
    int size;

public:
    arrsort()
    {
        cout << "\nEnter size of the array: ";
        cin >> size;
        cout << "\nEnter array elements: ";
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }
    void sarray()
    {
        T num;
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    num = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = num;
                }
            }
        }
        for (int i = 0; i < size; i++)
            cout << arr[i] << "  ";
    }
};

int main()
{
    cout << "\nInteger Array:\n";
    arrsort<int> ob1;
    cout << "\nFloat Array:\n";
    arrsort<float> ob2;

    cout << "\nSorted integer array is ";
    ob1.sarray();
    cout << "\nSorted float array is ";
    ob2.sarray();
    return 0;
}