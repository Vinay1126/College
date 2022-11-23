#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char *str;

public:
    String()
    {
        str = new char[100];
    }

    void input()
    {
        cout << "Enter a string: ";
        cin >> str;
    }

    void display()
    {
        cout << "The string is: " << str;
    }

    String operator+(String Str)
    {
        String temp;
        temp.str = strcat(str, Str.str);
        return temp;
    }
};

int main()
{
    String str1, str2;
    str1.input();
    str2.input();
    String str3 = str1 + str2;
    str3.display();
    return 0;
}