#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("copy.txt");
    ofstream out("destination.txt");
    char ch;
    in.get(ch);
    while (!in.eof())
    {
        if (ch >= 65 && ch <= 90)
            ch = ch + 32;
        else if (ch >= 97 && ch <= 122)
            ch = ch - 32;
        out << ch;
        in.get(ch);
    }
    in.close();
    out.close();
    in.open("destination.txt");
    in.get(ch);
    while (!in.eof())
    {
        putchar(ch);
        in.get(ch);
    }
    in.close();
}