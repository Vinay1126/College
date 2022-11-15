#include <iostream>
using namespace std;
#define maxs 5

int main()
{
    int arr[maxs], size;
    try
    {
        cout << "Enter size of array: ";
        cin >> size;
        if (size <= maxs)
        {
            cout << "Enter array elements: ";
            for (int i = 0; i < maxs; i++)
                cin >> arr[i];

            cout << "\nArray: ";
            for (int i = 0; i < maxs; i++)
                cout << arr[i] << " ";
        }
        else
            throw('f');
    }
    catch (char l)
    {
        cout << "ARRAY OUT OF BOUNDS ERROR:-Given size is greater than max size\n";
    }
    return 0;
}