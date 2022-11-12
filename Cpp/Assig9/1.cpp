#include <iostream>
using namespace std;

template <class T>

void sarray(T arr[], int size)
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
        cout << " " << arr[i];
}
int main()
{
    int intgSize, floatSize;
    cout << "\nEnter integer array size: ";
    cin >> intgSize;
    int intgarr[intgSize];
    cout << "Enter integer array: ";
    for (int i = 0; i < intgSize; i++)
        cin >> intgarr[i];
    cout << "\nEnter float array size: ";
    cin >> floatSize;
    float floatarr[floatSize];
    cout << "Enter float array: ";
    for (int i = 0; i < floatSize; i++)
        cin >> floatarr[i];
    cout << "The integer array is: ";
    sarray(intgarr, intgSize);
    cout << "\nThe float array is: ";
    sarray(floatarr, floatSize);
    return 0;
}