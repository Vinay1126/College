#include <iostream>
using namespace std;
int main()
{
    string numb;
    int count = 0;
    cout << "\nEnter the vehicle number: ";
    getline(cin, numb);
    try
    {
        for (int i = 0; i < 2; i++)
        {
            if (numb[i] >= 65 && numb[i] <= 90)
                count++;
        }
        if (count != 2)
            throw(7.4);
        if (numb[0] == 'I')
        {
            if (numb[1] == 'N')
                throw('e');
        }
        for (int i = 2; i < 6; i++)
        {
            if (numb[i] == 0)
                count++;
        }
        if (count == 4)
            throw(1);
        else
            cout << "Valid number.";
    }
    catch (float)
    {
        cout << "First 2 values of number plate should be between A-Z.\n";
    }
    catch (char)
    {
        cout << "'IN' is not allowed in the vehicle's number plate.\n";
    }
    catch (int)
    {
        cout << "'0000' is not allowed in the vehicle's number plate.\n";
    }
    return 0;
}